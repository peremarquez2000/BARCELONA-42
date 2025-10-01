/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/27 14:00:35 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a / *b;
	aux2 = *a % *b;
	*a = aux1;
	*b = aux2;
}
/*
int main(void)
{
	int a;
	int b;
	
	a = 7;
	b = 4;
	
	ft_div_mod(&a,&b);
	
	printf("%d",a);
	printf("%d",b);
	return (0);	
}
*/
