/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:02:14 by sabenet           #+#    #+#             */
/*   Updated: 2021/03/22 11:02:24 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*send_dst;
	unsigned char	*send_src;

	send_dst = (unsigned char *)dst;
	send_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		send_dst[i] = send_src[i];
		if (send_dst[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		++i;
	}
	return (NULL);
}
