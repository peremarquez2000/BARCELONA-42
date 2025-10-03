/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:40:40 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 12:23:28 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	c = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)&(ptr)[i]);
		i++;
	}
	return ((void *)0);
}
/*
int main()
{
   char cadena[] = "Erse una vez...";
   char cadena2[] = "Erse una vez...";
   char *puntero;
 
   puntero = (char *)memchr( cadena, 'a', 50 );
   printf( "%s\n", cadena); 
   printf( "%s\n", puntero ); 
	printf("\n");
	puntero = (char *)ft_memchr( cadena2, 'a', 50 );
   printf( "%s\n", cadena);
   printf( "%s\n", puntero );
 
   return 0;
}
*/
