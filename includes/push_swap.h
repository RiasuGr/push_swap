/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:37:09 by sabenet           #+#    #+#             */
/*   Updated: 2022/03/01 14:10:00 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "../libft-/libft.h"
# include "limits.h"

typedef struct s_stack
{
	struct s_list	*first_a;
	struct s_list	*last_a;
	struct s_list	*first_b;
	struct s_list	*last_b;
	int				size_a;
	int				size_b;
	int				min;
	int				max;
	int				opti_op;
	int				index_a;
	int				index_b;
	int				index_a_tmp;
	int				index_b_tmp;
	int				dir_a;
	int				dir_b;
	int				dir_a_tmp;
	int				dir_b_tmp;
	int				index_tmp;
}				t_stack;

void		creat_list(t_stack *env, char **str);
int			ft_getmax(t_list *first_a);
int			ft_getmin(t_list *first_a);
void		init(t_stack *env);
int			ft_check(char **tab);
int			handler(int c);
void		my_lstadd_front(t_list	**alst, t_list	*new, t_list	*first);
void		ft_sort(t_stack	*env);
void		ft_big_sort(t_stack	*env);
int			my_node_count(t_list	*head);
char		*my_strjoin(char	*s1, char	*s2);
void		myft_strlen(char	**str);
int			my_strlen(char	*str);
char		**my_split(const char *s, char c);
int			my_isdigit(int i);
long long	my_atoi(const char *str);
void		my_lstadd_back(t_list	**alst, t_list	*new, t_list	**last);
t_list		*my_lstnew(int content);
void		print_list(t_list	*list);
// MOVE
void		ft_push_head(t_list **lst_1, t_list **lst_2, \
							t_list *lst1_first, t_list *lst2_first);
void		ft_swap(t_list **lst, t_list *first, t_list *last);
void		ft_rotate(t_list **lst, t_list *first_lst, t_list **last);
void		ft_reverse_rota(t_list **lst, t_list **lst_end, \
							t_list *first, t_list *last_lst);
void		ft_reverse_rota_a(t_stack *env);
void		ft_reverse_rota_b(t_stack *env);
void		ft_reverse_rota_a_bis(t_stack *env);
int			ft_find_min(t_list *b_list, int a);
int			ft_from_head(t_list *lst_b, int value);
int			ft_from_tail(t_list *lst_b, int value);
void		ft_rotate_a(t_stack *env);
void		ft_rotate_b(t_stack *env);
void		ft_fast_sort_2(t_stack *env);
#endif // PUSH_SWAP_H // 