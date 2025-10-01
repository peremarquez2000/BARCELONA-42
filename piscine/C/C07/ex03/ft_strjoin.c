/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:30:04 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/04 19:52:32 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

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

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*m;

	m = malloc(sizeof(char))

	i = 0;
	while (i < size)
	{
		
		i++;
	}
}
/*
int	main(void)
{
	//ft_range(1,40);
	
	int* a;
	printf("ft_ultimate_range= %d\n",ft_ultimate_range(&a,1,40));
	printf("%d", a[0]);
	printf("%d", a[1]);
	printf("%d", a[2]);
	printf("%d\n", a[3]);
	printf("%d", a[38]);
	//printf("%d", a[40]);

	//printf("\n ft_range %d\n",ft_range(1,4));
	//printf("\n ft_strdup %s\n", ft_strdup("hola"));
}
*/
