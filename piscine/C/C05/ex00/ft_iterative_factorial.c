/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:51:58 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/01 20:31:32 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	aux;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		aux = nb;
		while (aux > 1)
		{
			aux = aux - 1;
			nb = nb * (aux);
		}
		return (nb);
	}
	else
		return (0);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
*/
