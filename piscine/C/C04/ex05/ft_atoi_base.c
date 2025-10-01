/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:13:44 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/01 21:02:50 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		j = i;
		while (base[j++])
		{
			if (base[i] == base[j])
				return (0);
		}
		i++;
	}
	return (1);
}

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

int	ft_find_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}
/*
void	ft_base(char *str, char *base, int i, int *aux)
{
	int	int_str;
	int	longi;

	while (ft_find_in_base(str[i], base) >= 0)
		i++;
	i--;
	longi = i;
	while (ft_find_in_base(str[i], base) >= 0 && i >= 0)
	{
		int_str = ft_find_in_base(str[i], base);
		*aux = *aux + int_str * ft_exp(ft_strlen(base), longi - i);
		i--;
	}
}
*/

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	flag;
	int	aux;
	int	longi;

	aux = 0;
	flag = 1;
	i = 0;
	if (!ft_is_base(base))
		return (0);
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ')
	{
		if (str[i++] == '-')
			flag = -flag;
	}
	while (ft_find_in_base(str[i + 1], base) >= 0)
		i++;
	longi = i;
	while (ft_find_in_base(str[i], base) >= 0)
	{
		aux += (ft_find_in_base(str[i], base)
				*ft_exp(ft_strlen(base), longi - i));
		i--;
	}
	return (flag * aux);
}
/*
int	main(void)
{
	char str[20] = "  -++---bbab344378";
	//ft_atoi(a);
	printf("%d",ft_atoi_base(str,"ab"));
	return (0);
}
*/
