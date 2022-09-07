NAME=main
FLAGS= -Wall -Wextra -Werror -std=c++98
SRCS=AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
HEADERS=AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
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
