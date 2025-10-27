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

static	void	ft_base_10(char *str, int i, int longi, int *aux)
{
	int	int_str;

	while ('0' <= str[i] && str[i] <= '9' && i >= 0)
	{
		int_str = str[i] - 48;
		*aux = *aux + int_str * ft_exp(10, longi - i);
		i--;
	}
}

static int	ft_is_space(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	flag;
	int	aux;
	int	longi;

	aux = 0;
	flag = 1;
	i = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -flag;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		i++;
	i--;
	longi = i;
	ft_base_10((char *)str, i, longi, &aux);
	return (flag * aux);
}
/*

void	ft_print_result2(char c)
{
	write(1, &c, 1);
}
void	ft_print_result(int n)
{
	if (n >= 0)
	{
		if (n >= 10)
			ft_print_result(n / 10);
		ft_print_result2(n % 10 + '0');
	}
	else
	{
		ft_print_result2('-');
		if (n <= -10)
			ft_print_result(n / -10);
		ft_print_result2(n % -10 * -1 + '0');
	}
}
int	main(void)
{
	char a[20] = "00546:48";
	int n;
	n = ft_atoi(a);
	ft_print_result(n);
	printf("\natoi = %d",atoi(a));

	return (0);
}
*/