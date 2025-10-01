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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)0;
	ptr = malloc(nmemb * size);
	if (ptr == (void *)0)
		return ((void *)0);
	//ft_bzero()
	return (ptr);
}
/*
int	main()
{
    char* ptr;
    ptr = ft_calloc(50, sizeof(char));
    //ptr = malloc(50 * sizeof(char));
    return (0);
}
*/
