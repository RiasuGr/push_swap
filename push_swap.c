/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:57:47 by sabenet           #+#    #+#             */
/*   Updated: 2022/03/01 15:55:51 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_check_overfloz(char **arg);

int	main(int ac, char **av)
{
	t_stack		env;
	int			i;
	char		*str;
	char		**arg;

	if (ac <= 1)
		handler(1);
	i = 1;
	str = NULL;
	while (av[i])
	{
	str = my_strjoin(str, av[i]);
	i++;
	}
	arg = ft_split(str, ' ');
	if (!ft_check(arg))
		handler(1);
	ft_check_overfloz(arg);
	init(&env);
	creat_list(&env, arg);
	env.size_a = my_node_count(env.first_a);
	//print_list(env.first_a);
	ft_sort(&env);
	//print_list(env.first_a);
}

void	ft_check_overfloz(char **arg)
{
	int			i;
	long long	overfloz;

	i = 0;
	overfloz = 0;
	while (arg[i])
	{
		overfloz = my_atoi(arg[i]);
		if (overfloz >= INT_MAX || overfloz <= INT_MIN)
			handler(1);
		i++;
	}
}
