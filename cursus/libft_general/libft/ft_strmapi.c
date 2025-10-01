/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:34:50 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/29 17:52:12 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*array;

	i = 0;
	array = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (array == (char *)0)
		return ((char *)0);
	while (s[i])
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = (char)0;
	return (array);
}
/*
char	f_dummy(unsigned int i, char c)
{
	if(i % 2 == 0)
	{
		if(c == 'c' || c == 'b')
			return ('a');
	}
	return(c);
}
int	main()
{
	char *s1 = "ccccccceeeeeeeeeeeeiiiiiii";
	char *s2;
	s2 = ft_strmapi(s1,&f_dummy);
	printf("\n%s\n",s2);

}
*/