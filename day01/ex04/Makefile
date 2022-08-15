NAME=main
FLAGS= -Wall -Wextra -Werror
MAIN=main.cpp

$(NAME): $(MAIN)
	c++ $(FLAGS) -o $(NAME) $(MAIN) $(OBJS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
