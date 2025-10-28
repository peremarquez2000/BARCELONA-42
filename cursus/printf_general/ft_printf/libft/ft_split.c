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
#include "libft.h"

static int	n_substr(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	if (s[0] != c)
	{
		counter++;
		i++;
	}
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
	int	start;
	int	end;

	start = 0;
	end = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && i == 0)
			start = 0;
		else if (s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == (char)0))
		{
			end = i;
			m[j] = ft_substr(s, start, end - start + 1);
			j++;
		}
		i++;
	}
	m[j] = (char *)0;
}

char	**ft_split(char const *s, char c)
{
	char	**m;
	int		size;

	size = n_substr(s, c);
	if (size == 0 || s[0] == (char)0)
	{
		m = (char **)malloc(1 * sizeof(char *));
		if (!m)
			return (NULL);
		m[0] = (char *)0;
		return (m);
	}
	m = (char **)malloc((size + 1) * sizeof(char *));
	if (!m)
		return (NULL);
	ft_fill_matrix(m, s, c);
	return (m);
}
/*
int	main()
{
	char **tab;
	char *s = "";
	int n = n_substr(s, ' ');
	tab = ft_split(s, ' ');

	int i = 0;
	while (i < n)
	{
		printf("\ni = %d", i);
		printf("\ntab[i] = %d", tab[i] == ());
		i++;
	}
}
*/
/*
int main()
{
	char **tab;
	char *s = "a";
	int n = n_substr(s, ' ');
	tab = ft_split(s, ' ');

	printf("\nn = %i", n);

	int i = 0;
	while (i < n)
	{
		printf("\ntab[i] = %s", tab[i]);
		i++;
	}

}
	*/