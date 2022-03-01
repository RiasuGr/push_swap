# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 22:54:28 by sabenet           #+#    #+#              #
#    Updated: 2022/03/01 11:00:43 by sabenet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

INCLUDES 		:= .
PATH_SRC 		:= ./src

PATH_LIBFT 		:= ${INCLUDES}/libft-
libftincludes 	:= ${PATH_LIBFT}/libft.h
libft.a 		:= ${PATH_LIBFT}/libft.a

SRC 			:= push_swap.c\
					utils.c\
					./move/node_count.c\
					./move/ft_push_head.c\
					./move/ft_rotate.c\
					./move/ft_swap_two.c\
					./move/ft_reverse_rota.c\
					./move/algo.c\
					./move/util_list.c\
					./move/init_and_check.c\
					./move/get_int_min_max.c\
					./move/get_move.c\

OBJS 			:=${SRC:.c=.o}

CFLAG  			:=-Wall -Wextra -Werror -g -fsanitize=address 
CC 				:= gcc -Inodes ${CFLAG}


all:
	@$(MAKE) -j $(NAME)

${NAME}: ${OBJS}
			@$(MAKE) -j -s --no-print-directory -C libft-/
			$(CC) ${OBJS} libft-/libft.a -o ${NAME}

%.o : %.c
		${CC} -c ${CFLAGS} -o $@ $<

clean:
			@$(MAKE) -s --no-print-directory -C libft-/ clean
			${RM} ${OBJS}

fclean: 	clean
			@$(MAKE) -s --no-print-directory -C libft-/ fclean
			${RM} ${bin}

re: 		fclean all

.PHONY: all clean fclean re
