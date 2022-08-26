NAME=main
FLAGS= -Wall -Wextra -Werror -std=c++98
MAIN=main.cpp

$(NAME): $(MAIN)
	c++ $(FLAGS) -o $(NAME) $(MAIN) $(OBJS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
