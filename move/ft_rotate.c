/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:53:58 by sabenet           #+#    #+#             */
/*   Updated: 2022/03/01 15:55:38 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_list **lst, t_list *first_lst, t_list **last)
{
	t_list	*tmp;

	tmp = NULL;
	if (*lst && (*lst)->next)
	{
	tmp = *lst;
	*lst = (*lst)->next;
	(*lst)->last = NULL;
	tmp->next = NULL;
		my_lstadd_back(lst, tmp, last);
	tmp->next = NULL;
	first_lst = *lst;
	}
}

void	ft_rotate_b(t_stack *env)
{
	while (env->index_b--)
	{
		ft_rotate(&env->first_b, env->first_b, &env->last_b);
		ft_putstr_fd("rb\n", 1);
	}
}

void	ft_rotate_a(t_stack *env)
{
	while (env->index_a--)
	{
		ft_rotate(&env->first_a, env->first_a, &env->last_a);
		ft_putstr_fd("ra\n", 1);
	}
}
