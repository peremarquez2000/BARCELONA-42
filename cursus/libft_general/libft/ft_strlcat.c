/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 19:29:29 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

static void	ft_v_strcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_s1;

	len_s1 = (size_t)ft_strlen(s1);
	j = 0;
	i = (size_t)ft_strlen(s1);
	while (s2[j] && j < size - len_s1 - 1)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;

	len_dest = (size_t)ft_strlen(dest);
	len_src = (size_t)ft_strlen(src);
	if (size == 0)
	{
		return ((size_t)(len_src));
	}
	if (size > len_dest)
	{
		ft_v_strcat(dest, src, size);
		return ((len_src + len_dest));
	}
	else
	{
		return (size + len_src);
	}
}
/*
int main(void)
{
	//char c1[] = "HOLA QUE TAL";
	//char c2[] = "ESTAS";
	size_t a = 19;
	char c3[] = "HOLA QUE TAL";
    char c4[] = "ESTAS";

	//printf("strlcat");
	//printf("\n%lu",strlcat(c1,c2, 14));
	//printf("\n%s", c1);
	//printf("\n%s\n", c2);
	printf("\nft_strlcat");
	printf("\n%zu",ft_strlcat(c3,c4,a));
	printf("\n%s", c3);
	printf("\n%s", c4);
	return (0);	
}
*/
