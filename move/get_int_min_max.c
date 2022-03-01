/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_min_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:19:14 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 02:29:16 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_getmax(t_list *first_a)
{
	t_list	*tmp;
	int		i;

	tmp = first_a;
	i = INT_MIN;
	while (tmp)
	{
		if (tmp->content >= i)
			i = tmp->content;
	tmp = tmp->next;
	}
	return (i);
}

int	ft_getmin(t_list *first_a)
{
	t_list	*tmp;
	int		i;

	i = INT_MAX;
	tmp = first_a;
	while (tmp)
	{
		if (tmp->content <= i)
			i = tmp->content;
	tmp = tmp->next;
	}
	return (i);
}
