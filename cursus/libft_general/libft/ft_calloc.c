/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:00:07 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 11:24:55 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdint.h>
#include <stdio.h>

static int	ft_overflow(size_t nmemb, size_t size)
{
		size_t max;
		if (nmemb > size)
			max = nmemb;
		else
			max = size;
		if (nmemb * size < max)
		{
			return (1);
		}
		return (0);
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	ptr = (void *)0;
	if(nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		return(ptr);
	}
	if (ft_overflow(nmemb, size) == 1)
		return (ptr);
	ptr = malloc(nmemb * size);
	if (ptr == (void *)0)
		return ((void *)0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int	main()
{
    char* ptr;
	printf("%zu",SIZE_MAX * 0);
    ptr = ft_calloc(SIZE_MAX, SIZE_MAX);

	 7 check(p != NULL); free(p); showLeaks();
	p = ft_calloc(5, 0);

    return (0);
}
*/
