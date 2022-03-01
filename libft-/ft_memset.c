/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:07:04 by sabenet           #+#    #+#             */
/*   Updated: 2021/03/23 11:35:26 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*i;

	if (count == 0)
		return (pointer);
	i = pointer;
	while (count--)
	{
		*i = (unsigned char)value;
		if (count)
			i++;
	}
	return (pointer);
}
