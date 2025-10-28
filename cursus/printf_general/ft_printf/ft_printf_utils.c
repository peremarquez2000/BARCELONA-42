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

int	ft_digits_ui(unsigned int number)
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

int	ft_digits(int number)
{
	int	count;

	count = 1;
	if (number < 0)
	{
		number = -number;
		count++;
	}
	while (number / 10 != 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

void	ft_putnbr_ui_fd(unsigned int n, int fd)
{
	char	c_number;

	if (n / 10 != 0)
		ft_putnbr_ui_fd(n / 10, fd);
	c_number = (n % 10) + '0';
	write(fd, &c_number, 1);
}

int	ft_cs(char c, va_list args)
{
	char	ch;
	char	*string;

	if (c == 'c')
	{
		ch = (char)va_arg(args, int);
		return (write(1, &ch, 1));
	}
	else if (c == 's')
	{
		string = va_arg(args, char *);
		if (!string)
			string = "(null)";
		ft_putstr_fd(string, 1);
		return (ft_strlen(string));
	}
	return (0);
}

int	ft_cspdiux(char c, va_list args)
{
	int				integer;
	unsigned int	ui;

	if (c == 'c' || c == 's')
		return (ft_cs(c, args));
	if (c == 'd' || c == 'i')
	{
		integer = va_arg(args, int);
		ft_putnbr_fd(integer, 1);
		return (ft_digits(integer));
	}
	else if (c == 'u')
	{
		ui = va_arg(args, unsigned int);
		ft_putnbr_ui_fd(ui, 1);
		return (ft_digits_ui(ui));
	}
	else if (c == 'x' || c == 'X')
		return (ft_from_ul_to_hexa(va_arg(args, unsigned long), c == 'X'));
	else if (c == 'p')
		return (ft_hexa_adress(va_arg(args, unsigned long)));
	else if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

/*
int	main(void)
{
	ft_putnbr_ui_fd(2147489999,1);
	return (0);
} */
