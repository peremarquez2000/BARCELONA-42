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

char *copia_plus_one(char *nl,int size, char c)
{
    char *new_nl;
    int i;

    i = 0;
    new_nl = malloc((size + 2)*sizeof(char));
    while (i < size)
    {
        new_nl[i] = nl[i];
        i++;
    }
    new_nl[i] = c;
    new_nl[i + 1] = (char)0;
    return (new_nl);
}