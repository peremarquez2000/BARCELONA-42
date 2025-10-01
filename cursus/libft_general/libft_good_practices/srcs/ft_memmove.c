/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:40:40 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 18:26:20 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i++;
		while (i <= n)
		{
			((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
	char str1[] = "abcdefg";
	char str2[] = "abcdefg";
	//printf("%s\n", str1);
	ft_memmove(str1, str1 + 2, 3);
	memmove(str2, str2 + 2, 3);
	printf("%s\n", str1);
	printf("%s\n", str2);
	
}
*/
