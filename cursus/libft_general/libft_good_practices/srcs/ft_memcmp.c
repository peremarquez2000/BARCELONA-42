/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:40:40 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 13:48:11 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] > ptr2[i])
			return (ptr1[i] - ptr2[i]);
		else if (ptr1[i] < ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char dest[4] = "zxa";
	char src[4] = "zxa";
	int value;
	//int	value1;
	printf( "cadena dest pre = %s\n", dest);
	printf( "cadena src pre = %s\n", src );
	value = ft_memcmp( dest, src, 5);
	printf("\n");
	printf( "cadena dest post = %s\n", dest);
	printf( "cadena src post = %s\n", src);
	printf( "value %d\n", value );
	printf("-----------------\n");

	char cadena3[3] = "zxa";
	char cadena4[] = "zxa";
        printf( "ftcadena dest pre = %s\n", cadena3);
        printf( "ftcadena src pre = %s\n", cadena4 );
        value1 = ft_memcmp( cadena3, cadena4, 13);
        printf("\n");
        printf( "ftcadena dest post = %s\n", cadena3);
        printf( "ftcadena src post = %s\n", cadena4);
        printf( "value %d\n", value1 );
	return 0;
}
*/
