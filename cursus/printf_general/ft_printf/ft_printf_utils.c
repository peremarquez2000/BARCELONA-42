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

static int	ft_exp(int number, int times)
{
	int	i;
	int	aux;

	i = 1;
	aux = number;
	while (i < times)
	{
		number = number * aux;
		i++;
	}
	if (times == 0)
	{
		number = 1;
	}
	return (number);
}

int	ft_digits(unsigned int number)
{
	int	i;

	i = 1;
	while (number / 10 != 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_ui_fd(unsigned int n, int fd)
{
	int		i;
	char	c_number;

	i = ft_digits(n) - 1;
	while (i >= 0)
	{
		c_number = (n / ft_exp(10, i)) + '0';
		n = n % ft_exp(10, i);
		write(fd, &c_number, 1);
		i--;
	}
}

int	ft_cspdiux(char c, va_list args)
{
	char ch;
	char *string;
	int	integer;
	unsigned int ui;
	unsigned long ul;
	if(c == 'c')
	{
		ch = (char)va_arg(args, int);
		write(1, &ch, 1);
		return (1);
	}

	else if(c == 's')
	{
		string = va_arg(args, char *);
		if(!string)
			string = "(null)";
		ft_putstr_fd(string, 1);
		return (ft_strlen(string));
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


	return (0);
}


/* 
int	main(void)
{
	ft_putnbr_ui_fd(2147489999,1);
	return (0);
} */
