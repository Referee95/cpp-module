NAME = main

SRCS = Bureaucrat.cpp  AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

CC = c++

CFLGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : main.cpp $(OBJS)
	$(CC) $(CFLGS) $^ -o $(NAME)

clean :
	@-rm -rf $(OBJS)
fclean :
	@-rm -rf $(OBJS) $(NAME)

re : fclean all