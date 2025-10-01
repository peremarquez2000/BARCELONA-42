/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/04 01:29:59 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **argv, int index1, int index2)
{
	char	*aux;

	aux = argv[index1];
	argv[index1] = argv[index2];
	argv[index2] = aux;
}

void	ft_sort(char **argv, int argc)
{
	int	i;
	int	min_index;
	int	index;

	index = 1;
	while (index < argc)
	{
		i = index;
		min_index = index;
		while (i < argc)
		{
			if (ft_strcmp(argv[min_index], argv[i]) > 0)
				min_index = i;
			i++;
		}
		ft_swap(argv, index, min_index);
		i = 0;
		while (argv[index][i])
		{
			write(1, &argv[index][i], 1);
			i++;
		}
		write(1, "\n", 1);
		index++;
	}
}

/*
int main(int argc, char **argv)
{
	ft_sort(argv, argc);
	return (0);
}
*/
