NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp  PmergeMe1.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror  #-std=c++98 #-fsanitize=address -g 
OBJS = ${SRCS:.cpp=.o}

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

all : $(NAME)

clean : 
	-rm -rf $(OBJS)
	
fclean :
	-rm -rf $(OBJS) $(NAME)

re : fclean all