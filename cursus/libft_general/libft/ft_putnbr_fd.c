/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                        :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:13:44 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/29 14:44:15 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

static int	ft_digits(int number)
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

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c_number;

	i = ft_digits(n) - 1;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		while (i >= 0)
		{
			c_number = (n / ft_exp(10, i)) + '0';
			n = n % ft_exp(10, i);
			write(fd, &c_number, 1);
			i--;
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648,1);
	return (0);
}
*/
