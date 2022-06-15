NAME		= megaphone
SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)
FLAGS		= -std=c++98 -Wall -Wextra -Werror
RM			= rm -f
CC			= clang++

.cpp.o:
			$(CC) $(FLAGS) -cpp $< -o $(<:.cpp=.o)

all:		$(NAME)
$(NAME):	$(OBJS)
				$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean:			
				$(RM) $(OBJS)
fclean:		clean
				$(RM) $(NAME)
re:			fclean $(NAME)
.PHONY:		all clean fclean re