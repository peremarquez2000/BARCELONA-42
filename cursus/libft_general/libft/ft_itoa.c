/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:13:44 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/29 12:56:24 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_exp(int number, int times)
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

static int	n_digits(int nb)
{
	int	counter;

	counter = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

static void	ft_fill_array(char *nb_c, int size, int i, int n)
{
	while (i < size)
	{
		nb_c[i] = n / ft_exp(10, size - i - 1) + 48;
		n = n % ft_exp(10, size - i - 1);
		i++;
	}
	nb_c[i] = (char)0;
}

char	*ft_itoa(int n)
{
	char	*nb_c;
	int		size;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = n_digits(n);
	if (n < 0)
		size++;
	nb_c = (char *)malloc((size + 1) * sizeof(char));
	if (nb_c == (char *)0)
		return ((char *)0);
	if (n < 0)
	{
		n = -n;
		nb_c[0] = '-';
		i++;
	}
	ft_fill_array(nb_c, size, i, n);
	return (nb_c);
}
/*

int	main(void)
{
	int	a = 0;
	printf("\nn_digits === %d\n", n_digits(a));
	printf("\nITOA === %s\n", ft_itoa(a));
	return (0);
}
*/