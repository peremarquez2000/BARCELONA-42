/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:22:43 by pemarque          #+#    #+#             */
/*   Updated: 2025/09/25 13:08:23 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_lst;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, ptr);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void * addOne(void * p) 
{
	void * r = malloc(sizeof(int));
	*(int*)r = *(int*)p + 1;
	return (r);
}
int main(void)
{
	int tab[] = {10, 9, 8, 7};
	t_list * l =  ft_lstnew(tab);

	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	//printf("\nLAST%d\n",((int *)ft_lstlast(l)->content)[1]);
	t_list * m = ft_lstmap(l, addOne, free);
	t_list * tmp = l;

	for (int i = 0; i < 4; ++i)
	{
		printf("%d",*(int*)tmp->content == i);
		tmp = (t_list *)tmp->next;
	}
	tmp = m;
	for (int i = 0; i < 4; ++i)
	{
		printf("%d",*(int*)tmp->content == i + 1);
		tmp = (t_list *)tmp->next;
	}
	
}
*/
/*
int main(void)
{
	signal(SIGSEGV, sigsegv);
	title("ft_lstmap\t: ")

	int tab[] = {0, 1, 2, 3};
	t_list * l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list * m = ft_lstmap(l, addOne, free);
	t_list * tmp = l;
	 1 2 3 4 for (int i = 0; i < 4; ++i)
	{
		check(*(int*)tmp->content == i);
		tmp = (t_list *)tmp->next;
	}
	tmp = m;
	 5 6 7 8  for (int i = 0; i < 4; ++i)
	{
		check(*(int*)tmp->content == i + 1);
		tmp = (t_list *)tmp->next;
	}
	freeList(l); ft_lstclear(&m, free); showLeaks();
	write(1, "\n", 1);
	return (0);
}
*/