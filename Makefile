# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 14:19:44 by msimaozi          #+#    #+#              #
#    Updated: 2022/12/13 14:19:45 by msimaozi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
CC= cc
CFLAGS= -Wall -Werror -Wextra
SRC= ft_printf.c ft_csi.c ft_hupp.c ft_cch.c
OBJ= ${SRC:.c=.o}

${NAME}: ${OBJ}
	ar rc $(NAME) $(OBJ)

all: ${NAME}

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all
