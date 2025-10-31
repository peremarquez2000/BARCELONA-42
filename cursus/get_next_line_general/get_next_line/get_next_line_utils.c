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

int	ft_bar_n_position(char *buffer, int size)
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

char	*ft_new_line(char *buffer, int end_position)
{
	int		i;
	char	*new_nl;

	i = 0;
	new_nl = malloc(((end_position + 1) + 1) * sizeof(char));
	while (i <= end_position)
	{
		new_nl[i] = buffer[i];
		i++;
	}
	new_nl[end_position + 1] = (char)0;
	return (new_nl);
}

char	*ft_new_buff(char *buff1, int buff1_size, char *buff2, int buff2_size)
{
	int		i;
	char	*new_buff;

	i = 0;
	new_buff = malloc((buff1_size + buff2_size) * sizeof(char));
	while (i < buff1_size)
	{
		new_buff[i] = buff1[i];
		i++;
	}
	i = 0;
	while (i < buff2_size)
	{
		new_buff[buff1_size + i] = buff2[i];
		i++;
	}
	return (new_buff);
}

char	*ft_tail(char *buffer, int size, int start)
{
	char	*new_buff;
	int		corrector;

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
