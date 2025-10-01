/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/28 13:31:28 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0)
		return (len_src);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	return (len_src);
}
/*
int main(void)
{
	unsigned int a=6;
	char src[30]="ABCDEFG";
	char src_test[30]= "ABCDEFG";
	char dest[20]="HDSAJKHDKAJS";
	char dest_test[20]="HDSAJKHDKAJS";
	
	ft_strlcpy(dest_test, src_test, a);
	strlcpy(dest, src, a);
	printf("La de strlcpy: %s",dest);
	printf("\n");
	printf("La de ft_strlcpy: %s",dest_test);
	printf("\n");
	printf("\n");
	printf("\n");
	write(1,dest,15);
	write(1,"\n",1);
	write(1,dest_test,15);
	printf("\n");
	printf("\n");
	printf("El return de ft_strlcpy es: %zu",ft_strlcpy(dest_test,src_test, a));
	printf("\n");
	printf("El return de strlcpy es: %zu",strlcpy(dest_test,src_test, a));
	//printf("Lo que hay a posteriori %s",dest);
	//ft_putchar_test(dest,80);
	return (0);	
}
*/