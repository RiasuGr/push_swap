/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:09:53 by sabenet           #+#    #+#             */
/*   Updated: 2022/02/16 10:29:18 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (*str)
		{
		i++;
		str++;
		}
	}
	return (i);
}

int	my_isdigit(int i)
{
	if (i == '-' || (i >= '0' && i <= '9' ) || i == 32)
		return (1);
	return (0);
}

char	*my_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = 0;
	str = (char *)malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 2));
	if (s1)
	{
		while (s1[++i])
			str[i] = s1[i];
		free(s1);
	}
	else
		i = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = ' ';
	str[i + j + 1] = '\0';
	return (str);
}

long long	my_atoi(const char *str)
{
	long long	res;
	long long	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

void	print_list(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp)
	{
		printf(" value : %d \n", tmp->content);
		tmp = tmp->next;
	}
}
