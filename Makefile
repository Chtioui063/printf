# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achtioui <achtioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 13:41:18 by achtioui          #+#    #+#              #
#    Updated: 2023/05/02 13:41:18 by achtioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c ft_printhexa_maj.c ft_printhexa_min.c ft_putchar.c ft_putnbr.c \
		ft_putptr.c ft_putstr.c ft_putunbr.c ft_strchr.c ft_strlen.c \
		
OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all : ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	
clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re