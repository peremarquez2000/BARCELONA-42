/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 13:08:23 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = *lst;
		*lst = new;
		new->next = aux;
	}
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
}
*/
/*
int main()
{
	t_list * l =  NULL;
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	ft_lstadd_front(&l, ft_lstnew((void*)2));
	//printf("%s",(char *)l->next->content);

	//check(((t_list *)l->next)->content == (void*)1);
	printf("%d",((t_list *)l->next)->content == (void*)1);

}
	*/
/*
int main()
{
	t_list * l =  NULL;
	t_list *p1 =ft_lstnew("A") ;
	t_list *p2 =ft_lstnew("B") ;
	t_list *p3 =ft_lstnew("C") ;
	ft_lstadd_front(&l,p1);
	ft_lstadd_front(&l,p2);
	// p2 p1
	ft_lstadd_front(&p1,p3);
	//printf("%s",(char *)l->next->content);
	//printf("%s",(char *)l->content);
	// printf("%s",(char *)p1->content);
	// printf("%s",(char *)p1->next->content);
	//printf("%s",(char *)p1->next->next->content);
	//printf("%s",(char *)p1->content);
	printf("%s",(char *)l->content);
	printf("%s",(char *)l->next->content);
	printf("%s",(char *)l->next->next->content);
}
	*/