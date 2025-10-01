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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

int	ft_atoi(char *str)
{
	int	i;
	int	flag;
	int	aux;
	int	longi;

	aux = 0;
	flag = 1;
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -flag;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		i++;
	i--;
	longi = i;
	ft_base_10(str, i, longi, &aux);
	return (flag * aux);
}
/*
int	main(void)
{
	char a[20] = "  --+--+38";
	//printf("%d", atoi(a));
	ft_atoi(a);
	printf("%d",ft_atoi(a));
	return (0);
}
*/