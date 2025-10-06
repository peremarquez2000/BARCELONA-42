/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                       :+:      :+:    :+:   */
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

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(1 * sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->next = (void *)0;
	ptr->content = content;
	return (ptr);
}
/*
int main(void)
{
	char *a = "hola";
	t_list *lst;
	lst = ft_lstnew(a);
	
	printf("\n%p", lst->content);
	printf("\n%s", (char *)lst->content);
	printf("\n%p", a);
}
*/
