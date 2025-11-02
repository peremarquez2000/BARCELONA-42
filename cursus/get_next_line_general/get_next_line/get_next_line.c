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
#include <stdio.h>
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
	if(*buffer != NULL)
		free(*buffer);
	*buffer = NULL;
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
		// printf("\n--------------------\n");
		// printf("\nst_buffer ==\n");
		// leer_buffer(st_buffer, st_bytesread);
		// printf("\n");
		// printf("\nst_bytesread=%d\n", st_bytesread);
		// printf("\nbuffer ==\n");
		// leer_buffer(buffer, bytesread);
		// printf("\nbytesread=%d\n",bytesread);
		if(bytesread < 0)
		{
			ft_free(&st_buffer);
			ft_free(&buffer);
			// free(buffer);
			// free(st_buffer);
			// st_buffer = NULL;
			st_bytesread = 0;
			return (NULL);
		}

		if (bytesread == 0 && st_bytesread == 0)
		{
			ft_free(&st_buffer);
			ft_free(&buffer);
			// free(buffer);
			// free(st_buffer);
			// st_buffer = NULL;
			st_bytesread = 0;
			return (NULL);
		}
		st_buffer = ft_new_buff(&st_buffer, st_bytesread, buffer, bytesread);
		ft_free(&buffer);
		st_bytesread += bytesread;
		bar_n_pos = ft_bar_n_position(st_buffer, st_bytesread);
		if (bar_n_pos != -1)
			// free(buffer);
			return (ft_found_bar_n(&st_buffer, &st_bytesread, bar_n_pos));
		else if (st_bytesread != BUFFER_SIZE && bytesread != BUFFER_SIZE)
			return (ft_end_of_file(&st_buffer, &st_bytesread));
	}
}

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

	for (int i = 0; i < 10; i++)
	{
		printf("\ni = %d\n", i);
		nl = get_next_line(fd);
		printf("%s", nl);
		ft_free(&nl);
	}
	return (0);
}