/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:26:33 by sabenet           #+#    #+#             */
/*   Updated: 2021/03/22 11:30:48 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	size_2;

	if (*s2 == '\0')
		return ((char *)s1);
	size_2 = ft_strlen(s2);
	while (*s1 != '\0' && size-- >= size_2)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, size_2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
