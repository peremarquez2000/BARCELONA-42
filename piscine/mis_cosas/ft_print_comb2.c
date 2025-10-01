/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:13:44 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/14 15:03:32 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9' )
	{
		c = a;
		while (b <= '9' )
		{
			d = b + 1;
			while (c <= '9' )
			{
				while (d <= '9' )
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
					write(1, "\n", 1);
					d = d + 1;
				}
				d = '0';
				c = c + 1;
			}
			c = a;
			b = b + 1;
		}
		a = a + 1;
		b = 0;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
