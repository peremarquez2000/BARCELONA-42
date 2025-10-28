/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/08/29 10:46:57 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned int n, int flag)
{
	if (n <= 9)
	{
		n = n + 48;
		write(1, &n, 1);
	}
	else if (10 <= n && n < 16)
	{
		if (flag == 0)
		{
			n = n + 87;
			write(1, &n, 1);
		}
		else if (flag == 1)
		{
			n = n + 55;
			write(1, &n, 1);
		}
	}
}

int	ft_len_hexa(unsigned long n)
{
	int			count;

	count = 0;
	if (n < 16)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	ft_print_from_ui_to_hexa(unsigned int n, int flag)
{
	unsigned int	quo;
	unsigned int	resi;
	unsigned int	*hexa_array;
	int				len;
	int				i;

	len = ft_len_hexa(n);
	hexa_array = (unsigned int *)malloc(len * sizeof(unsigned int));
	if (!hexa_array || n == 0)
	{
		free(hexa_array);
		write(1,"(nil)", 5);
		return(5);
	}
	i = 0;
	quo = 17;
	while (quo != 0)
	{
		quo = n / 16;
		resi = n % 16;
		n = quo;
		hexa_array[i++] = resi;
	}
	i = len - 1;
	while (i >= 0)
		ft_hexa(hexa_array[i--], flag);
	return (len);
}


int	ft_hexa_adress(unsigned long n)
{
	unsigned long	quo;
	unsigned long	resi;
	unsigned long	*hexa_array;
	int				len;
	int				i;

	
	len = ft_len_hexa(n);
	hexa_array = (unsigned long *)malloc(len * sizeof(unsigned long));
	if (!hexa_array || n == 0)
	{
		free(hexa_array);
		write(1,"(nil)", 5);
		return(5);
	}
	i = 0;
	quo = 17;
	while (quo != 0)
	{
		quo = n / 16;
		resi = n % 16;
		n = quo;
		hexa_array[i++] = resi;
	}
	write(1,"0x",2);
	i = len - 1;
	while (i >= 0)
		ft_hexa(hexa_array[i--], 0);
	free(hexa_array);
	return (len + 2);
}



/* void	ft_hexa_adress(void *addr)
{
	unsigned long adr_nb;
	adr_nb = (unsigned long) addr;
	
	ft_newf(adr_nb);
} */
/* 
int	main(void)
{
	
	// char c[20] = "Bonjour les amin";
	int c = 5;
	// ft_print_memory(c,48);
	ft_hexa_adress(&c);
	printf("\n\nPRINTF==%p", &c);
	//ft_print_from_int_to_hexa(18446744073709551504,0);
	return (0);
} */
