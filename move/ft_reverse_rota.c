/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rota.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:53:51 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 02:31:50 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rota(t_list **lst, t_list **lst_e, t_list *fi, t_list *la)
{
	t_list	*tmp;

	tmp = NULL;
	if (*lst && (*lst)->next)
	{
	tmp = *lst_e;
	*lst_e = (*lst_e)->last;
		if (*lst_e)
			(*lst_e)->next = NULL;
		my_lstadd_front(lst, tmp, fi);
	tmp->last = NULL;
	la = *lst_e;
	}
}

void	ft_reverse_rota_b(t_stack *env)
{
	while (env->index_b--)
	{
		ft_reverse_rota(&env->first_b, &env->last_b, env->first_b, env->last_b);
		ft_putstr_fd("rrb\n", 1);
	}
}

void	ft_reverse_rota_a_bis(t_stack *env)
{
	while (env->first_b->content < env->last_a->content && \
		env->last_a->content != env->max)
	{
		ft_reverse_rota(&env->first_a, &env->last_a, env->first_a, env->last_a);
		ft_putstr_fd("rra\n", 1);
	}
}
