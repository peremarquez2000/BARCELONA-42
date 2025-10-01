/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 08:30:04 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/04 09:18:42 by pemarque         ###   ########.fr       */
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
