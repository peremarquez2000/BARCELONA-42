/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                      		        :+:      :+:    :+:   */
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

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->next);
	del(lst);

}
/*
int main(void)
{
	char *a = "hola";
	char *b = "adeu";
	char *c = "bombo";
	t_list *p1;
	t_list *p2;
	t_list *p3;
	p1 = ft_lstnew(a);
	p2 = ft_lstnew(b);
	p3 = ft_lstnew(c);
	ft_lstadd_front(&p2,p1);
	ft_lstadd_back(&p2,p3);
	ft_lstdelone(p3,&free);
	
	//printf("\n%s", (char *)ft_lstlast(p1)->content);

}
*/