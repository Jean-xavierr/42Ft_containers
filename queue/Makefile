# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 14:18:27 by jereligi          #+#    #+#              #
#    Updated: 2021/04/03 14:18:52 by jereligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tester_queue

SRC = 	tester_queue.cpp	

OBJ = $(SRC:.cpp=.o)

CC = clang++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) :	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
			rm -rf $(OBJ)

fclean : clean
			rm -rf $(NAME)

re : fclean all