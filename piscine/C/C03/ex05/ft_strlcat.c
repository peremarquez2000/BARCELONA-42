/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/28 19:35:11 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_v_strcat(char *s1, char *s2, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j] && (i < size - 1))
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	aux1;
	unsigned int	aux2;

	aux1 = ft_strlen(dest);
	aux2 = ft_strlen(src);
	if (size == 0)
		return (aux2);
	ft_v_strcat(dest, src, size);
	if (aux2 + size >= aux1 + aux2)
		return (aux2 + aux1);
	else
		return (aux2 + size);
}
/*
int main(void)
{
	int a = 0;
	char c1[50] = "HOLA QUE TAL";
	char c2[15] = "ESTAS";

	char c3[50] = "HOLA QUE TAL";
        char c4[15] = "ESTAS";

	printf("strlcat");
	printf("\n%lu",strlcat(c1,c2,a));
	printf("\n%s", c1);
	printf("\n%s\n", c2);
	printf("\nft_strlcat");
	printf("\n%u",ft_strlcat(c3,c4,a));
	printf("\n%s", c3);
	printf("\n%s", c4);
	return (0);	
}
*/
