/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:03:01 by sabenet           #+#    #+#             */
/*   Updated: 2021/03/22 11:03:33 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer_1, const void *pointer_2, size_t size)
{
	unsigned char	*str_1;
	unsigned char	*str_2;

	str_1 = (unsigned char *)pointer_1;
	str_2 = (unsigned char *)pointer_2;
	while (size--)
	{
		if (*str_1 != *str_2)
			return (*str_1 - *str_2);
		if (size)
		{
			str_1++;
			str_2++;
		}
	}
	return (0);
}
