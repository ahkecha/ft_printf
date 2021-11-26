# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 16:17:39 by ahkecha           #+#    #+#              #
#    Updated: 2021/11/25 12:09:00 by ahkecha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_printf.c ft_printf_utils.c ft_handler.c ft_hexaddr.c
OBJ			=	${SRC:.c=.o}
NAME		=	libftprintf.a
CC			=	gcc
RM			= 	rm -f
CFLAGS		=	-Wall -Werror -Wextra -I.


all:		$(NAME)

$(NAME):		$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all fclean clean re
