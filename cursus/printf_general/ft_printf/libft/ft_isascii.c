/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 14:00:52 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
   char cadena[] = ";0ñsáR(h&~?RÛ1/";
   int i;
   
   for(i = 0; cadena[i]; i++)
{	
	printf("%c, %d\n", cadena[i], isascii(cadena[i]));
	printf("%c, %d\n", cadena[i], ft_isascii(cadena[i]));
}
   return 0;
}
*/
