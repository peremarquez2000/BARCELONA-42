/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:30:04 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/04 15:20:38 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*m;
	int	range;

	i = 0;
	if (min >= max)
	{
		m = (int *)0;
		return (m);
	}
	range = max - min;
	m = malloc(range * sizeof(int));
	while (i < range)
	{
		m[i] = min + i;
		i++;
	}
	return (m);
}
/*
int	main(void)
{
	//ft_range(1,40);
	int* a = ft_range(1, 40);
	printf("%d", a[0]);
	printf("%d", a[1]);
	printf("%d", a[2]);
	printf("%d", a[3]);

	//printf("\n ft_range %d\n",ft_range(1,4));
	//printf("\n ft_strdup %s\n", ft_strdup("hola"));
}
*/
