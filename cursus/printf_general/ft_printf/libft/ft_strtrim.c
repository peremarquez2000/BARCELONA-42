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

static int	is_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_begin_set(char *s, char *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (is_in_set(s[i], set) == 0)
			return (i);
		i++;
	}
	return (0);
}

static int	ft_end_set(char *s, char *set)
{
	int	longitud;

	longitud = ft_strlen(s) - 1;
	while (s[longitud])
	{
		if (is_in_set(s[longitud], set) == 0)
			return (longitud);
		longitud--;
	}
	return (longitud);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*ptr;

	i = 0;
	start = 0;
	end = 0;
	start = ft_begin_set((char *)s1, (char *)set);
	end = ft_end_set((char *)s1, (char *)set);
	ptr = malloc(((end - start + 1) + 1) * sizeof(char));
	if (ptr == (char *)0)
		return (ptr);
	i = 0;
	while (i < end - start + 1)
	{
		ptr[i] = s1[start + i];
		i++;
	}
	ptr[i] = (char)0;
	return (ptr);
}
/*
int	main()
{
	char *s1 = "123412";
	char *s2 = "12";
	char *new = ft_strtrim(s1, s2);
	printf("print = %s\n", new);
}
	*/