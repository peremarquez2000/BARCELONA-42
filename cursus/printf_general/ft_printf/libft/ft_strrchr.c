/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:40:40 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/26 11:05:29 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)0;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			ptr = (char *)&s[i];
		i++;
	}
	return (ptr);
}
/*
int	main()
{
	char *s = "hol que tal";
	printf("%s\n",strrchr(s,'o'));
	printf("%s\n",ft_strrchr(s,'o'));
}
*/
