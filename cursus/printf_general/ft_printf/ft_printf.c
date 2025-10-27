/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:40:40 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 13:11:53 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *string, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, string);
	while (string[i])
	{
		if(string[i] == '%')
		{
			count++;
			i++;
			ft_cspdiux(string[i], args);
		}
		else
			write(1, &string[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
int main()
{
	int a = 5;
	ft_printf("La addres de la variable a=%d es:%p",a,&a);
}