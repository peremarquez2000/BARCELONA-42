/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:13:40 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/29 14:48:27 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;
	char			*ptr;

	i = 0;
	j = 0;
	ptr = (char *)0;
	if (little[0] == (char)0)
	{
		return ((char *)big);
	}
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == (char)0)
			return ((char *)&big[i]);
		i++;
	}
	return (ptr);
}
/*
int main()
{
	int i = 0;
    //char *little = "pepo";
	char * empty = (char*)"";
	while(empty[i])
	{
		printf("i = %d\n", i);
		i++;
	}
    //char *big = "hola pepoo que tal va  estamos fresh?";
    //char *puntero = ft_strnstr(big, little, 0);
    char *puntero;
    puntero = strnstr(empty, "", -1);
    printf("\npuntero: %s", puntero);
    puntero = strnstr(empty, "", 0);
    printf("\npuntero: %s\n", puntero);
}
	*/