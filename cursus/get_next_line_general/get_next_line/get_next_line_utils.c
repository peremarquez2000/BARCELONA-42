/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:26:22 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 20:00:49 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdio.h>

int ft_posicion_barra_n(char *buffer, int size)
{
    int i;
    i = 0;

    while (i < size)
    {
        if (buffer[i] == '\n')
            return (i);
        i++;
    }
    return (-1);
}

char *ft_guarda_contingut(char *nl, int nl_size, char *buffer, int end_position)
{
    int i;
    i = 0;
    char *new_nl;
    new_nl = malloc((nl_size + (end_position + 1)) * sizeof(char));
    while (i < nl_size)
    {
        new_nl[i] = nl[i];
        i++;
    }
    i = 0;
    while (i <= end_position)
    {
        new_nl[nl_size + i] = buffer[i];
        i++;
    }
    free(nl);
    return (new_nl);
}

char *ft_tail(char *buffer, int size, int start)
{
    char *new_buff;
    int corrector;

    if (start >= size)
        return (NULL);
    corrector = start;
    new_buff = (char *)malloc((size - start) * sizeof(char));
    if (!new_buff)
        return (NULL);
    while (start <= size)
    {
        new_buff[start - corrector] = buffer[start];
        start++;
    }
    return (new_buff);
}



/* int main()
{
    char *str;
    char *substr;
    str = (char *)malloc(2*sizeof(char));
    str[0] = 'a';
    str[1] = '\n';
    int posicion = posicion_barra_n(str, 2);

    // printf("%d", posicion);


    substr = ft_tail(str, 2 , posicion + 5);
    printf("%s", substr);
    // printf("%d", substr == NULL);
} */

/* int main()
{
    char *str;
    char *substr;
    str = (char *)malloc(2*sizeof(char));
    str[0] = 'a';
    str[1] = '\n';
    int posicion = posicion_barra_n(str, 2);

    // printf("%d", posicion);


    substr = ft_tail(str, 2 , posicion + 5);
    printf("%s", substr);
    // printf("%d", substr == NULL);
} */
