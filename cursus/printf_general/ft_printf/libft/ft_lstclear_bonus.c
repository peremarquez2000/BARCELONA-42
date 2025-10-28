/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                      		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 13:08:23 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
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
	p1->next = p2;
	ft_lstclear(&p1,free);
}
*/
/*
int main(void)
{
	char *a = malloc(5*sizeof(char));
	char *b = malloc(5*sizeof(char));
	char *c = malloc(5*sizeof(char));
	ft_strlcpy(a,"hola",10);
	ft_strlcpy(b,"adeu",10);
	ft_strlcpy(c,"bombo",10);
	t_list *p1 = ft_lstnew(a);
	t_list *p2 = ft_lstnew(b);
	t_list *p3 = ft_lstnew(c);
	p2->next = p3;
	p1->next = p2;
	ft_lstclear(&p1,free);
	//printf("AFTER FREE: %p\n", (char *)p1->content);
	//printf("AFTER FREE: %p\n", (char *)p2->content);
	//printf("AFTER FREE: %p\n", (char *)p3->content);
	printf("\nAFTER FREE: %p\n", p1->content);
	printf("AFTER FREE: %p\n", p2->content);
	printf("AFTER FREE: %p\n", p3->content);
}
	*/
