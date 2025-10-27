/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:30:04 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 11:34:54 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*m;

	i = 0;
	while (src[i])
		i++;
	m = malloc((i + 1) * sizeof(char));
	if (m == (char *)0)
		return ((char *)0);
	len = i;
	i = 0;
	while (i < len)
	{
		m[i] = src[i];
		i++;
	}
	return (m);
}
/*
int	main(void)
{
	printf("\n strdup %s\n", strdup("hola"));
	printf("\n ft_strdup %s\n", ft_strdup("hola"));
}
*/
