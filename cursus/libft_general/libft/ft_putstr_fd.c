/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:41:14 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 10:52:59 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_fd(char *c, int fd)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(fd, &c[i], 1);
		i++;
	}
}
/*
int main(void)
{
    ft_putstr_fd("hola que tal",1);
}
    */
