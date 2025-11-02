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

char	*ft_new_buff(char **buf1, int *buf1_size, char **buf2, int *buf2_size)
{
	int		i;
	char	*new_buff;

	i = 0;
	new_buff = malloc((*buf1_size + *buf2_size) * sizeof(char));
	if (!new_buff)
	{
		ft_free(buf1);
		return (NULL);
	}
	while (i < *buf1_size)
		new_buff[i] = (*buf1)[i++];
	i = 0;
	while (i < *buf2_size)
		new_buff[*buf1_size + i] = (*buf2)[i++];
	ft_free(buf1);
	ft_free(buf2);
	*buf1_size += *buf2_size;
	*buf2_size = 0;
	return (new_buff);
}

char	*ft_new_line(char *buffer, int end_position)
{
	int		i;
	char	*new_nl;

	i = 0;
	new_nl = malloc(((end_position + 1) + 1) * sizeof(char));
	if (!new_nl)
		return (NULL);
	while (i <= end_position)
	{
		new_nl[i] = buffer[i];
		i++;
	}
	new_nl[end_position + 1] = (char)0;
	return (new_nl);
}

char	*ft_tail(char **buffer, int size, int start_pos)
{
	char	*new_buff;
	int		corrector;

	if (start_pos >= size)
	{
		ft_free(buffer);
		return (NULL);
	}
	corrector = start_pos;
	new_buff = (char *)malloc((size - start_pos) * sizeof(char));
	if (!new_buff)
		return (NULL);
	while (start_pos < size)
	{
		new_buff[start_pos - corrector] = (*buffer)[start_pos];
		start_pos++;
	}
	ft_free(buffer);
	return (new_buff);
}

char	*ft_found_bar_n(char **st_buffer, int *st_bytesread, int bar_n_pos)
{
	char	*nl;

	nl = ft_new_line(*st_buffer, bar_n_pos);
	*st_buffer = ft_tail(st_buffer, *st_bytesread, bar_n_pos + 1);
	*st_bytesread = *st_bytesread - bar_n_pos - 1;
	return (nl);
}

char	*ft_end_of_file(char **st_buffer, int *st_bytesread)
{
	char	*temp;
	int		i;

	temp = malloc((*st_bytesread + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < *st_bytesread)
	{
		temp[i] = (*st_buffer)[i];
		i++;
	}
	temp[*st_bytesread] = (char)0;
	ft_free(st_buffer);
	*st_bytesread = 0;
	return (temp);
}
