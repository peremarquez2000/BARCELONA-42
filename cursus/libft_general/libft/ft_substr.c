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
#include "libft.h"

static char	*ft_0_malloc(void)
{
	char	*ptr;

	ptr = malloc(1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = (char)0;
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)0;
	if (start > (unsigned int)ft_strlen(s))
		return (ft_0_malloc());
	if (start + len > (unsigned int)ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
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
	char *hola = "ipsum dolor";
	char *adeu;
	adeu = ft_substr(hola, 0, 8);
	printf("print = %s\n", adeu);
}
	char * s = ft_substr("tripouille", 0, 42000);
	s = ft_substr("tripouille", 1, 1);
	s = ft_substr("tripouille", 100, 1);
		1  check(!strcmp(s, "tripouille"));
	 2  mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();
	*/
/*
int main()
{
	//har * s = ft_substr("tripouille", 0, 42000);
	char * s = ft_substr("1234", 3, 42000);

	//char *s = ft_substr("tripouille", 1, 1);
	//char *p = "\0x409000";
	//printf("pointer %s", p);

	printf("\n%s\n", s);
	//printf("pointer %s", p);

}
	*/