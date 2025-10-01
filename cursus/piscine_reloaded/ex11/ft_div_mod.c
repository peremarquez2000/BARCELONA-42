/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/19 13:53:48 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a;
	int b;
	int c[1];
	int  d[1];
	
	a = 4;
	b = 7;
	
	ft_div_mod(b,a,c,d);
	
	printf("%d",*c);
	printf("%d",*d);
	return (0);	
}
*/
