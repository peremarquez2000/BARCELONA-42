/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/28 09:47:15 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	//int a = 5;
	//char c1[100] = "hola que blbas";
	//char c2[100] = "hola que tal";
	
	//printf("%d\n",strncmp(c1, c2, a));
	//printf("%d\n",ft_strncmp(c1, c2, a));
	printf("FT=%d\n",ft_strncmp("aest\200", "test\0", 6));
	printf("NORMAL=%d\n",strncmp("hest\200", "test\0", 6));
}
	*/
