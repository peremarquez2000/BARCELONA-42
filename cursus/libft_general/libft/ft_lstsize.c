/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                      		            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 13:08:23 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 1;
	while (lst->next != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
/*
int main(void)
{
	char *a = "hola";
	char *b = "adeu";
	t_list *p1;
	t_list *p2;
	p1 = ft_lstnew(a);
	p2 = ft_lstnew(b);
	ft_lstadd_front(&p2,p1);
	
	printf("\n%s", (char *)p1->content);
	printf("\n%s", (char *)p1->next->content);
	printf("\n%d", ft_lstsize(p1));

}
*/