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
#define BUFFER_SIZE 5
#endif

char *get_next_line(int fd)
{
    static char *nl;
    char *buffer;
    int buffer_size;
    int bytesRead;
    int posicion_barra_n;

    buffer_size = BUFFER_SIZE;
    buffer = (char *)malloc(buffer_size * sizeof(char));
    if (!buffer)
        return (NULL);
    while (1) // no hayas encontrado final de ficheor o un \n
    {
        bytesRead = read(fd, buffer, buffer_size);
        posicion_barra_n = ft_bar_n_position(buffer);
        if (posicion_barra_n != -1)
        {
            // imprime la linea con el contenido arrastrado con \n final y con null al final
            return (new_copia(buffer, posicion_barra_n, 1));
        }

        if (bytesRead != buffer_size)
        {
            // imprime la linea con el contenido anterior sin \n final y con null al final
            return (new_copia(buffer, bytesRead, 0));
        }
    }
}
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

    printf("%s", get_next_line(fd));
    return (0);
}
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