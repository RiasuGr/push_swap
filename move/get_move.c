/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:25:05 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 10:29:44 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort(t_stack *env)
{
	env->max = ft_getmax(env->first_a);
	env->min = ft_getmin(env->first_a);
	if (env->size_a >= 6)
		ft_big_sort(env);
}

int	ft_find_min(t_list *b_list, int a)
{
	t_list	*tmp;

	tmp = b_list;
	while (tmp)
	{
		if (tmp->content < a)
			return (1);
	tmp = tmp->next;
	}
	return (0);
}

int	ft_from_head(t_list *lst_b, int value)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = lst_b;
	while (tmp)
	{
		if (tmp->content < value)
			return (i);
	tmp = tmp->next;
	i++;
	}
	return (1000);
}

int	ft_from_tail(t_list *lst_b, int value)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = lst_b;
	while (tmp)
	{
		if (tmp->content < value)
			return (i);
	tmp = tmp->last;
	i++;
	}
	return (1000);
}
