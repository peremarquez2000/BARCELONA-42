/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/20 17:36:46 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = aux;
		i++;
	}
}
/*
int main(void)
{
	int c[5];
	c[0] = 0;
	c[1] = 1;
	c[2] = 2;
	c[3] = 3;
	c[4] = 4;
	
	
	printf("%d", c[0]);
	printf("%d", c[1]);
	printf("%d", c[2]);
	printf("%d", c[3]);
	printf("%d", c[4]);
	
	ft_rev_int_tab(c, 5);
	printf("\n");
	printf("%d", c[0]);
	printf("%d", c[1]);
	printf("%d", c[2]);
	printf("%d", c[3]);
	printf("%d", c[4]);
	return (0);	
}
*/
