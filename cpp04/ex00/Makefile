NAME = main

SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

CC = c++

CFLGS =  -Wall -Werror -Wextra -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME): main.cpp $(OBJS)
	$(CC) $(CFLGS) $^ -o $(NAME)

clean :
	@-rm -rf $(OBJS) 

fclean:
	@-rm -rf $(OBJS) $(NAME)

re : fclean all