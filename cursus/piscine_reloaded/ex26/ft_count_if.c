/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:21:15 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 11:57:12 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

/*
int	ft_exp(int number, int times)
{
	int	i;
	int	aux;

	i = 1;
	aux = number;
	while (i < times)
	{
		number = number * aux;
		i++;
	}
	if (times == 0)
	{
		number = 1;
	}
	return (number);
}

int	ft_digits(int number)
{
	int	i;

	i = 1;
	while (number / 10 != 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c_number;

	i = ft_digits(nb) - 1;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		while (i >= 0)
		{
			c_number = (nb / ft_exp(10, i)) + '0';
			nb = nb % ft_exp(10, i);
			write(1, &c_number, 1);
			i--;
		}
	}
}
*/
/*
int	dummy (char *test)
{
	int i;
	i = 0;
	while (test[i])
	{
		printf("i = %d", i);
		if(test[i] == '2')
        	{
                	printf("hey\n");
                	return (1);
        	}
		i++;
	}
	return (0);
	
}
*/
int	ft_count_if(char **tab, int (*f)(char *))
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (tab[i] != (char *)0)
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
/*
int	main()
{
	
	char **tab;
	int	i;
	i = 0;
	tab = calloc(2,sizeof(char*));
	while(i < 2)
	{
		tab[i] = calloc(4,sizeof(char));
		i++;
	}
	tab[0][0] = '0';
	tab[0][1] = '1';
	tab[0][2] = '2';
	tab[0][3] = '3';
	tab[1][0] = '2';
	tab[1][1] = '2';
	tab[1][2] = '3';
	tab[1][3] = '4';
	ft_count_if(tab,&dummy);
		
}
*/
