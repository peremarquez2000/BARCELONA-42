/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:57:16 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/02 19:10:50 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	init(char m[10][10], int z)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (z == 0)
				m[i][j] = '0';
			else if (z == 1)
			{
				if (m[j][i] == '*')
					write(1, &("0123456789"[j]), 1);
			}
			j++;
		}
		i++;
	}
	if (z == 1)
		write(1, "\n", 1);
}

int	is_queen_in_diago(char m[10][10], int i, int j)
{
	int	z;

	z = 0;
	while (i - z >= 0 && j - z >= 0)
	{
		if (m[i - z][j - z] == '*')
			return (1);
		z++;
	}
	z = 0;
	while (i + z <= 9 && j - z >= 0)
	{
		if (m[i + z][j - z] == '*')
			return (1);
		z++;
	}
	return (0);
}

int	is_free_space(char m[10][10], int i, int j)
{
	int	z;

	z = 0;
	while (z < 10)
	{
		if (m[i][z] == '*')
			return (0);
		if (m[z][j] == '*')
			return (0);
		z++;
	}
	if (is_queen_in_diago(m, i, j) == 1)
		return (0);
	return (1);
}

void	add_queen(char m[10][10], int j, int *counter)
{
	int		i;

	i = 0;
	if (j == 10)
	{
		init(m, 1);
		*counter = *counter + 1;
		return ;
	}
	while (i < 10)
	{
		if (is_free_space(m, i, j))
		{
			m[i][j] = '*';
			add_queen(m, j + 1, counter);
			m[i][j] = '0';
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	m[10][10];
	int		counter;

	counter = 0;
	init(m, 0);
	add_queen(m, 0, &counter);
	return (counter);
}
/*
int main()
{
	//ft_ten_queens_puzzle();
	printf("\ncounter:%d\n",ft_ten_queens_puzzle());
}
*/
