/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:34:50 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/29 17:52:12 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int	n_substr(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	if (s[0] != c)
		counter++;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c))
			counter++;
		i++;
	}
	return (counter);
}

static void	ft_fill_matrix(char **m, const char *s, char c)
{
	int	i;
	int	j;
	int	inicio;
	int	final;

	inicio = 0;
	final = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			inicio = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == (char)0))
		{
			final = i;
			m[j] = ft_substr(s, inicio, final - inicio + 1);
			j++;
		}
		i++;
	}
	m[j] = (char *)0;
}

char	**ft_split(char const *s, char c)
{
	int		inicio;
	int		final;
	char	**m;
	int		size;

	size = n_substr(s, c);
	m = (char **)malloc((size + 1) * sizeof(char *));
	inicio = 0;
	final = 0;
	if (m == (char **)0)
		return ((char **)0);
	ft_fill_matrix(m, s, c);
	return (m);
}
//tab = ft_split("", ' ');

//	char * splitme = strdup("Tripouille");
//	tab = ft_split(splitme, ' ');