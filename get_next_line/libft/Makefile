# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 19:42:06 by mobouzar          #+#    #+#              #
#    Updated: 2019/04/11 20:35:26 by mobouzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra  -Werror
SRC = *.c \

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) -I.
	ar rc $(NAME) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all
