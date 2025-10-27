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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *)0;
	ptr = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	while (i < len_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < len_s1 + len_s2)
	{
		ptr[i] = s2[i - len_s1];
		i++;
	}
	ptr[i] = (char)0;
	return (ptr);
}
/*
int	main()
{
	char *s1 = "1234";
	char *s2 = "5656";
	char *new = ft_strjoin(s1, s2);
	printf("print = %s\n", new);
}
*/