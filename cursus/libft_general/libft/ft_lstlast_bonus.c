/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 13:08:23 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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
	p2->next = p3;
	ft_lstadd_front(&p2,p1);
	
	printf("\n%s", (char *)ft_lstlast(p1)->content);


}
*/