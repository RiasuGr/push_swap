/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:53:38 by sabenet           #+#    #+#             */
/*   Updated: 2022/03/01 15:55:44 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_opti_move(t_list *lst_b, t_stack *env, int value_a, int index_a)
{
	int	from_tail;
	int	from_head;

	from_tail = ft_from_tail(env->last_b, value_a);
	from_head = ft_from_head(lst_b, value_a);
	if (from_tail > from_head)
	{
	env->index_b_tmp = from_head;
	env->dir_b_tmp = 42;
	}
	else
	{
	env->index_b_tmp = from_tail;
	env->dir_b_tmp = 21;
	}
	if (env->index_b_tmp + index_a < env->opti_op)
	{
	env->index_a = index_a;
	env->index_b = env->index_b_tmp;
	env->dir_b = env->dir_b_tmp;
	env->opti_op = env->index_b + env->index_b;
	}
}

void	ft_exe_moves(t_stack *env)
{
	if (env->dir_b == 42)
		//ft_rotate(&env->first_a, env->first_a, &env->last_a);
		ft_rotate_b(env);
	else
		ft_reverse_rota_b(env);
	if (env->index_a > 0)
		//ft_rotate(&env->first_a, env->first_a, &env->last_a);
		ft_rotate_a(env);
	if (env->last_a->content != env->max && env->first_b)
		ft_reverse_rota_a_bis(env);
	ft_push_head(&env->first_b, &env->first_a, env->first_b, env->first_a);
	ft_putstr_fd("pa\n", 1);
}

void	ft_sort_big_num(t_stack *env)
{
	t_list	*tmp;
	int		k;

	while (env->first_b)
	{
		tmp = env->first_a;
		k = 0;
		while (tmp)
		{
			if (ft_find_min(env->first_b, tmp->content))
				ft_get_opti_move(env->first_b, env, tmp->content, k);
			tmp = tmp->next;
			k++;
		}
		ft_exe_moves(env);
		env->opti_op = 1500;
	}
}

void	ft_sort_prepare(t_stack *env)
{
	int	i;

	i = env->size_a;
	while (i != 2)
	{
		if (env->first_a->content == env->max)
		{
			env->index_a = 1;
			ft_rotate_a(env);
		}
		else
		{
			ft_push_head(&env->first_a, &env->first_b, \
				env->first_a, env->first_b);
			ft_putstr_fd("pb\n", 1);
			i--;
		}
	}
}

void ft_get_good_sort(t_stack *env)
{
	int min;
	int actuel;
	int i;
	t_list *tmp;

	tmp = env->first_a;
	actuel  = tmp->content;
	min = env->min;
	i = 0;
	while(actuel != min)
	{
		i++;
		tmp = tmp->next;
		actuel = tmp->content;
	}

	env->index_a = i;
	//ft_rotate(&env->first_a, env->first_a, &env->last_a);
	ft_rotate_a(env);
}
void	ft_big_sort(t_stack *env)
{
	t_list	*tmp;
	int		i;

	i = env->size_a;
	tmp = NULL;
	ft_sort_prepare(env);
	if (env->first_a->content == env->max)
	{
		ft_swap(&env->first_a, env->first_a, env->last_a);
		ft_putstr_fd("sa\n", 1);
	}
	ft_sort_big_num(env);
	ft_get_good_sort(env);
}
