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

void	ft_cspdiux(char c, va_list args)
{
	char ch;
	char *string;
	int	integer;
	unsigned int ui;
	unsigned long ul;
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
	else if(c == 'u')
	{
		ui = va_arg(args, unsigned int);
		ft_putnbr_ui_fd(ui, 1);
	}
	else if(c == 'x')
	{
		ui = va_arg(args, unsigned int);
		ft_print_from_ui_to_hexa(ui,0);

	}
	else if(c == 'X')
	{
		ui = va_arg(args, unsigned int);
		ft_print_from_ui_to_hexa(ui,1);
	}
	else if (c == 'p')
	{
		ul = va_arg(args, unsigned long);
		ft_hexa_adress(ul);

	}
	else if(c == '%')
		write(1, "%", 1);


	return;
}

