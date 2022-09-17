NAME=main
FLAGS= -Wall -Wextra -Werror -std=c++98
HEADERS=easyFind.hpp
MAIN=main.cpp

$(NAME): $(MAIN) $(HEADERS)
	c++ $(FLAGS) -o $(NAME) $(MAIN) $(OBJS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
