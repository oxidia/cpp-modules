NAME=megaphone
FLAGS= -Wall -Wextra -Werror -std=c++98 -std=c++98
SRCS=megaphone.cpp

$(NAME): $(SRCS)
	c++ $(FLAGS) -o $(NAME) $(SRCS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
