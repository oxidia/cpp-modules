NAME=main
FLAGS= -Wall -Wextra -Werror
HEADERS=MutantStack.hpp
MAIN=main.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(MAIN) $(HEADERS)
	c++ $(FLAGS) -o $(NAME) $(MAIN) $(OBJS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
