/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/20 20:24:57 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_min_string(int *tab, int *aux, int *index, int i)
{
	if (tab[i] < *aux)
	{
		*index = i;
		*aux = tab[i];
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	contador;
	int	index;
	int	aux;
	int	i;
	int	checker;

	aux = tab[0];
	index = 0;
	contador = 0;
	while (contador < size)
	{
		i = contador;
		aux = tab[contador];
		checker = 0;
		index = contador;
		while (i < size)
		{
			ft_min_string(tab, &aux, &index, i);
			i++;
		}
		ft_swap(&tab[contador], &tab[index]);
		contador++;
	}
}
/*
int main(void)
{
	int c[5];
	c[0] = 1;
	c[1] = 3;
	c[2] = 8;
	c[3] = 7;
	c[4] = 2;
	
	
	printf("%d", c[0]);
	printf("%d", c[1]);
	printf("%d", c[2]);
	printf("%d", c[3]);
	printf("%d", c[4]);
	printf("\n");
	ft_sort_int_tab(c, 5);
	printf("\n");
	printf("%d", c[0]);
	printf("%d", c[1]);
	printf("%d", c[2]);
	printf("%d", c[3]);
	printf("%d", c[4]);
	return (0);	
}
*/
