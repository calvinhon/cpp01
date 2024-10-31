NAME = sed
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.phony = all clean fclean re