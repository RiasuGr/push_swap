/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:54:21 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 10:29:20 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	my_lstadd_front(t_list **alst, t_list *new, t_list *first)
{
	if (*alst)
	{
		new->next = *alst;
		first = new;
		(*alst)->last = new;
	}
	first = new;
	*alst = new;
}

void	my_lstadd_back(t_list **alst, t_list *new, t_list **last)
{
	t_list	*lst;

	if (alst && *alst)
	{
		lst = *alst;
		while (lst->next)
			lst = lst->next;
	lst->next = new;
	new->last = lst;
	*last = new;
	}
	else if (alst)
	{
		*alst = new;
		*last = new;
	}
}

t_list	*my_lstnew(int content)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	str->last = NULL;
	return (str);
}
