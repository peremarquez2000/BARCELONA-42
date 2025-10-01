/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:34:50 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/29 17:52:12 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	start--;
	i = 0;
	ptr = (char *)0;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = (char)0;
	return (ptr);
}
/*
int	main()
{
	char *hola = "12345   6789";
	char *adeu;
	adeu = ft_substr(hola, 5, 7);
	printf("print = %s\n", adeu);
}
*/