/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_apuntadores_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:32:23 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/16 17:47:19 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	funcion(int *ptr, int value)
{
	*ptr = 5;
	value = 33;
	return ;
}

void	canvi_string(char *(ptr))
{
	*ptr = 'z';
	return ;
}

int	main(void)
{
	char	str[4];
	int		i;

	i = 0;
	while (i < 4)
	{
		str[i] = 'h';
		i++;
	}
	printf("%s", str);
	canvi_string(str);
	printf("%s", str);
	return (0);
}
