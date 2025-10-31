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
# define BUFFER_SIZE 5
#endif

char	*get_next_line(int fd)
{
	char		*nl = NULL;
	int			nl_size;
	static char	*st_buffer = NULL;
	static int	st_bytesRead = 0;
	char		*buffer;
	int			bytesRead;
	int			buffer_size;
	int			posicion_barra_n;
	int			flag;

	nl_size = 0;
	flag = 1;
	buffer_size = BUFFER_SIZE;
	bytesRead = 0;
	buffer = (char *)malloc(buffer_size * sizeof(char));
	if (!buffer)
		return (NULL);
	while (flag)
	{
		bytesRead = read(fd, buffer, buffer_size);
		st_buffer = ft_new_buff(st_buffer, st_bytesRead, buffer, bytesRead);
		st_bytesRead += bytesRead;
		if (bytesRead == 0 && st_bytesRead == 0)
			return (NULL);
		posicion_barra_n = ft_bar_n_position(st_buffer, st_bytesRead);
		if (posicion_barra_n != -1)
		{
			nl = ft_new_nl(nl, nl_size, st_buffer, posicion_barra_n);
			st_buffer = ft_tail(st_buffer, st_bytesRead, posicion_barra_n + 1);
			st_bytesRead = st_bytesRead - posicion_barra_n - 1;
			flag = 0;
		}
		else if (st_bytesRead != buffer_size && bytesRead != buffer_size)
		{
			nl = st_buffer;
			st_buffer = NULL;
			st_bytesRead = 0;
			flag = 0;
		}
	}
	return (nl);
}
/* 
int main()
{
    char *fileName = "test.txt";
    // char* nl;
    int fd = open(fileName, O_RDONLY);
    if (fd == -1)
    {
        printf("\nError Opening File!!\n");
        return (1);
    }
    else
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);

    for (int i = 0; i < 4; i++)
    {
        printf("\ni = %d\n", i);
        printf("%s", get_next_line(fd));
    }
    return (0);
} */
/* int main()
{
    char* fileName = "test.txt";
    // char* nl;
    int fd = open(fileName, O_RDONLY);
    if(fd == -1)
    {
        printf("\nError Opening File!!\n");
        return(1);
    }
    else
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);

    printf("%s",get_next_line(fd));
    return(0);
} */
/*
int main(void)
{
    char *line;

    while ((line = get_next_line(0)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    return 0;
}
*/
