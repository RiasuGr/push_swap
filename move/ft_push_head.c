/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_head.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:53:45 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 01:22:31 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_head(t_list **l1, t_list **l2, t_list *l1_f, t_list *l2_f)
{
	t_list	*tmp;

	tmp = NULL;
	if (*l1)
	{
	tmp = *l1;
	*l1 = (*l1)->next;
	tmp->next = NULL;
		if (*l1)
			(*l1)->last = NULL;
	l1_f = *l1;
		my_lstadd_front(l2, tmp, l2_f);
	}
}
