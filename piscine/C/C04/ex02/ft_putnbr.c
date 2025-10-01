/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:13:44 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/29 14:44:15 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_exp(int number, int times)
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

int	ft_digits(int number)
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

void	ft_putnbr(int nb)
{
	int		i;
	char	c_number;

	i = ft_digits(nb) - 1;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		while (i >= 0)
		{
			c_number = (nb / ft_exp(10, i)) + '0';
			nb = nb % ft_exp(10, i);
			write(1, &c_number, 1);
			i--;
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(283648);
	return (0);
}
*/
