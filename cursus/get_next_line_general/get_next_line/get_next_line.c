/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:26:22 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 20:00:49 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

/* static void leer_buffer(char *buffer, int size)
{
	int i =0;
	while(i < size)
	{
		write(1,&buffer[i], 1);
		i++;
	}
	return ;
} */

static int	ft_bar_n_position(char *buffer, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (buffer[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

void	ft_free(char **buffer)
{
	if (*buffer != NULL)
		free(*buffer);
	*buffer = NULL;
}

static char	*full_free(char **buf1, char **buf2, int *buf1_size, int *buf2_size)
{
	ft_free(buf1);
	ft_free(buf2);
	*buf1_size = 0;
	*buf2_size = 0;
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*st_buffer = NULL;
	static int	st_bytesread = 0;
	char		*buffer;
	int			bytesread;
	int			bar_n_pos;

	bytesread = 0;
	while (1)
	{
		buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
		if (!buffer)
			return (NULL);
		bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread < 0 || (bytesread == 0 && st_bytesread == 0))
			return (full_free(&st_buffer, &buffer, &st_bytesread, &bytesread));
		st_buffer = ft_new_buff(&st_buffer, &st_bytesread, &buffer, &bytesread);
		bar_n_pos = ft_bar_n_position(st_buffer, st_bytesread);
		if (bar_n_pos != -1)
			return (ft_found_bar_n(&st_buffer, &st_bytesread, bar_n_pos));
		else if (st_bytesread != BUFFER_SIZE && bytesread != BUFFER_SIZE)
			return (ft_end_of_file(&st_buffer, &st_bytesread));
	}
}

/* #include <stdio.h>
int main()
{
	char *fileName = "4-u.txt";
	char* nl;
	int fd = open(fileName, O_RDONLY);
	if (fd == -1)
	{
		printf("\nError Opening File!!\n");
		return (1);
	}
	else
		printf("\nFile \"%s\" opened sucessfully!\n", fileName);

	for (int i = 0; i < 12; i++)
	{
		printf("\ni = %d\n", i);
		nl = get_next_line(fd);
		printf("%s", nl);
		ft_free(&nl);
	}
	return (0);
} */