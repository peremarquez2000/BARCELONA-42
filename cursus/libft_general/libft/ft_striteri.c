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
#include "libft.h"

/*
void	f_dummy(unsigned int i, char *c) 
// no acaba de ser valida la fnucion estas paando el s[3][3] en el caso i = 3 
{
	if(c[i] == 'c')
	{
		//printf("hey");
		c[i] = 'a';
	}
}
	*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main()
{
	char s1[] = "ccc";
	printf("\n%s\n",s1);
	ft_striteri(s1,&f_dummy);
	printf("\n%s\n",s1);

}

*/