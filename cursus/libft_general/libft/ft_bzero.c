/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:12:39 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 11:19:51 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#define  BUF_SIZE  20

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int main(void)
{
   char *string1 = "hey que tal";
   char *string2 = "hey que tal";
 
   printf("\nBuffer contents: %s\n", string1);
   printf("\nBuffer contents: %s\n", string2);
	
	bzero(string1, 3);
   printf("\nBzero: %s\n", string1);
	//ft_bzero(string2,3);
   printf("\nft: %s\n", string2);
}
*/
