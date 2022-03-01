/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:11:54 by sabenet           #+#    #+#             */
/*   Updated: 2021/03/25 16:14:07 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int find)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char )find)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char )find)
		return ((char *)str + i);
	return (0);
}
