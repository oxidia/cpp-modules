NAME=phonebook
FLAGS= -Wall -Wextra -Werror -std=c++98 -std=c++98
SRCS=Contact.cpp PhoneBook.cpp
HEADERS=Contact.hpp PhoneBook.hpp
MAIN=main.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS) $(MAIN)
	c++ $(FLAGS) -o $(NAME) $(MAIN) $(OBJS)

%.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -o $@ -c $<

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
