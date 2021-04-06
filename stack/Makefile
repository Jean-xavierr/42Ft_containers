# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 14:19:37 by jereligi          #+#    #+#              #
#    Updated: 2021/04/06 11:35:40 by jereligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tester_stack

SRC = 	tester_stack.cpp	

OBJ = $(SRC:.cpp=.o)

CC = clang++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) :	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

sanitize : 	$(OBJ)
			$(CC) -o $(NAME) -fsanitize=address $(CPPFLAGS) $(OBJ)

clean :
			rm -rf $(OBJ)

fclean : clean
			rm -rf $(NAME)

re : fclean all