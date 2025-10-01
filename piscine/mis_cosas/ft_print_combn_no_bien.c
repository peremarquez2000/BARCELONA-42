/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:13:44 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/16 10:37:36 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_exp(int number, int times)
{
	//printf("\nEjecuto ft_exp\n");
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
	//printf("aaaaaaaaaaaaa");
	//printf("El numero %d \n", number);
	//printf("aaaaaaaaaaaaa");

	return (number);
}

int	ft_digits(int number)
{
	//printf("\nEjecuto ft_digits\n");
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
        //printf("\nEjecuto ft_putnbr\n");
	int		i;
	char	c_number;

	i = ft_digits(nb) - 1;
	while (i >= 0)
	{
		c_number = (nb / ft_exp(10, i)) + '0';
		nb = nb % ft_exp(10, i);
		write(1, &c_number, 1);
		i--;
	}
}

void ft_write_number_with_0 (int number, int n_of_zeros)
{
	//printf("\nEjecuto ft_write_number_with_0\n");
	int i;
	
	i = 0;
	while (i < n_of_zeros)
	{
		write(1,"0",1);
		i++;
	}
	ft_putnbr(number);
}

void	ft_print_combn(int n)
{
	int	number;
	int	aux;
	int	diferencia;

	aux = 0;
	number = 0;
	diferencia = n;
	while (aux < n)
	{
		number = number + ft_exp(10,aux) * (n - aux -1); 
		aux++;
	}
	//ft_write_number_with_0(number, n - ft_digits(number));
	
	while (number < ft_exp(10,n))
	{
		ft_write_number_with_0 (number,n - ft_digits(number) );
		if (number % 10 == 9)
		{
			number = number + diferencia;
			diferencia++;
		}
		write(1,"\n",1);
		number++;
	}
	

}


int	main(void)
{
	ft_print_combn(4);
	return (0);
}
