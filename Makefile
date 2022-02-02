# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 16:10:49 by bguyot            #+#    #+#              #
#    Updated: 2022/02/02 16:20:30 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = door_generator

SRCS = srcs/*.c

OBJS = $(SRCS:.c=.o)

LIBS = -lft

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRCS)
	mv *.o srcs
	gcc $(FLAG) -L. $(LIBS) -o $(NAME) $(OBJS)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all
