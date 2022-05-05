# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 07:45:09 by gyuyekim          #+#    #+#              #
#    Updated: 2022/05/05 07:45:20 by gyuyekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c\
	   1_0check_map.c\
	   1_1check_detail.c\
	   1_2make_AJTCS.c\
	   2_0make_map.c\
	   3_0find_square.c\
	   3_1find_square_utils.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME) : $(OBJECTS)
	$(CC)	$(CFLAGS)	-o	$(NAME)	$(OBJECTS)

clean:
	rm	-f	$(OBJECTS)

fclean: clean
	rm	-f	$(NAME)
	
re: fclean all
