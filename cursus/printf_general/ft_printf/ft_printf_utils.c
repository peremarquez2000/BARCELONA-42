/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                     :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:13:44 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/29 14:44:15 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_cspdiux(char c, va_list args)
{
	//ME FALTA %p, %u, %x, %X, %%
	char ch;
	char *string;
	int	integer;
	//args es la lsita con todos los elementos  tot = tot + va_arg(args, int);
	if(c == 'c')
	{
		ch = (char)va_arg(args, int);
		 write(1, &ch, 1);
	}

	else if(c == 's')
	{
		string = va_arg(args, char *);
		ft_putstr_fd(string, 1);
	}

	else if(c == 'd' || c == 'i')
	{
		integer = va_arg(args, int);
		ft_putnbr_fd(integer, 1);
	}

	(void)c;
	(void)args;
	return;
}

