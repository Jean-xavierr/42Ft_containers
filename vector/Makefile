NAME		=	vector

SRCS		=	main.cpp

CC			=	clang++

OBJS		=	$(SRCS:.cpp=.o)

CPPFLAGS	+=	-Wall -Werror -Wextra -std=c++98

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
