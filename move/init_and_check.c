/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:54:04 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 10:18:52 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	handler(int c)
{
	c = 1;
	write(1, "Error\n", 7);
	exit(1);
}

int	check_double(t_stack *env, int a)
{
	t_list	*tmp;

	tmp = env->first_a;
	while (tmp)
	{
		if (tmp->content == a)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	creat_list(t_stack *env, char **str)
{
	t_list	*tmp;
	int		i;

	i = 0;
	while (str[i])
	{
		tmp = my_lstnew(ft_atoi(str[i]));
		if (check_double(env, tmp->content) == 0)
			handler(1);
		else
			my_lstadd_back(&env->first_a, tmp, &env->last_a);
		i++;
	}
}

void	init(t_stack *env)
{
	env->first_a = NULL;
	env->first_b = NULL;
	env->last_a = NULL;
	env->last_b = NULL;
	env->opti_op = 1500;
	env->size_a = 0;
	env->size_b = 0;
	env->min = 0;
	env->max = 0;
	env->index_a = 0;
	env->index_b = 0;
	env->index_a_tmp = 0;
	env->index_b_tmp = 0;
	env->dir_a = 0;
	env->dir_b = 0;
	env->dir_a_tmp = 0;
	env->dir_b_tmp = 0;
}

int	ft_check(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
	j = 0;
		while (tab[i][j])
		{
			if (my_isdigit(tab[i][j]) == 0)
				return (0);
		j++;
		}
	i++;
	}
	return (1);
}
