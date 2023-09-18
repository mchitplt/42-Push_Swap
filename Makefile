# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 01:03:21 by mupolat           #+#    #+#              #
#    Updated: 2023/09/18 16:09:00 by mupolat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = push_swap.c  		\
 		check_error.c 	\
		move_functions.c 			\
		optimum_numbers.c 	\
		helper_function.c 	\
		utils.c 			\
		ft_split.c 			\
		parse.c				\
		utils2.c				\
		
NAME = push_swap
CC = gcc
OBJS = ${FILES:.c=.o}
FLAGS = -Wall -Wextra -Werror
all : ${NAME}
${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}
fclean :
	rm -rf ${OBJS} ${NAME}
clean : 
	rm -rf ${OBJS}
%.o:%.c
	${CC} -c $^ ${FLAGS} -o $@

re : fclean all

.PHONY: all re fclean clean