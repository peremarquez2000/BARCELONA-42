/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:40:40 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 13:11:53 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char dest[3] = "zxa";
	char src[] = "abcdef";
	char * puntero;
	printf( "cadena dest pre = %s\n", dest);
	printf( "cadena src pre = %s\n", src );
	puntero = (char *)memcpy( dest, src, 3);
	printf("\n");
	printf( "cadena dest post = %s\n", dest);
	printf( "cadena src post = %s\n", src);
	printf( "puntero %s\n", puntero );
	printf("-----------------\n");

	char cadena3[10] = "zxa";
	char cadena4[] = "abcdario";
        char * puntero1;
        printf( "ftcadena dest pre = %s\n", cadena3);
        printf( "ftcadena src pre = %s\n", cadena4 );
        puntero1 = (char *)ft_memcpy( cadena3, cadena4, 9);
        printf("\n");
        printf( "ftcadena dest post = %s\n", cadena3);
        printf( "ftcadena src post= %s\n", cadena4);
        printf( "puntero %s\n", puntero1 );

	return 0;
}
*/