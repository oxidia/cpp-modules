NAME=main
FLAGS= -Wall -Wextra -Werror -std=c++98
HEADERS=Iter.hpp
MAIN=main.cpp

$(NAME): $(HEADERS) $(MAIN)
	c++ $(FLAGS) -o $(NAME) $(MAIN) $(OBJS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
