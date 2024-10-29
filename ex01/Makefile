NAME = moarbrainz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std -g3 -fsanitize=address
OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp Zombie.cpp zombieHorde.cpp

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.phony: all clean fclean re