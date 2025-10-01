/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:43:28 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 12:40:30 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

//#define SIZE_a "hola"

int	file_name_missing(int argc)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	return (0);
}

int	too_many_arguments(int argc)
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	cannotreadfile(int value)
{
	if (value < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	buf[1000];
	int		long_read;
	int		fd;

	if (file_name_missing(argc) == 1 || too_many_arguments(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (cannotreadfile(fd) == 1)
		return (1);
	long_read = read(fd, buf, 1000);
	write(1, &buf, long_read);
	close(fd);
	return (0);
}
