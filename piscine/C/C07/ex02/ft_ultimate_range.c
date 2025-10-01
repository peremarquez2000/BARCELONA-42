/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:30:04 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/04 15:58:07 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*m;
	int	len;

	i = 0;
	if (min >= max)
	{
		m = (int *)0;
		return (0);
	}
	len = max - min;
	m = malloc(len * sizeof(int));
	if (m == NULL)
		return (1);
	while (i < len)
	{
		m[i] = min + i;
		i++;
	}
	*range = m;
	return (len);
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
