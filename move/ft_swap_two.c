/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:54:04 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 03:27:42 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_list **lst, t_list *first, t_list *last)
{
	int	tmp;

	if (*lst && (*lst)->next && (*lst)->next->next)
	{
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
	}
	else if (*lst && (*lst)->next && !(*lst)->next->next)
	{
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
	last = (*lst)->next;
	first = *lst;
	}
}
