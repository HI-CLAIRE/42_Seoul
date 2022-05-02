# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 15:36:46 by gyuyekim          #+#    #+#              #
#    Updated: 2022/05/01 15:23:33 by gyuyekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OFILES = ${CFILES:.c=.o}
INCL = includes
TARGET = libft.a

all: ${TARGET}

.c.o:
	${CC} ${CFLAGS} -I ${INCL} -c $< -o ${<:.c=.o}

${TARGET}: ${OFILES}
	ar rcs ${TARGET} ${OFILES}

clean:
	rm -rf ${OFILES}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
