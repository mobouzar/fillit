# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 16:53:40 by mobouzar          #+#    #+#              #
#    Updated: 2019/05/29 19:29:10 by mobouzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = fillit
SRC = checker.c drag.c set_tetrimino.c solving.c
OBJECTS = checker.o drag.o set_tetrimino.o solving.o

all : $(NAME)

$(NAME) :
		@make -C libft/
		@gcc $(FLAGS) -c $(SRC)
		@gcc $(OBJECTS) libft/libft.a $(FLAGS) -o $(NAME)

clean : 
		@rm -f $(OBJECTS)
		@make clean -C libft/
fclean : clean
		@rm -f $(NAME)
		@make fclean -C libft/

re : fclean all
