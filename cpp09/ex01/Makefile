NAME = RPN

SRCS = main.cpp RPN.cpp  

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror 

OBJS = ${SRCS:.cpp=.o}

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

all : $(NAME)

clean : 
	-rm -rf $(OBJS)
	
fclean :
	-rm -rf $(OBJS) $(NAME)

re : fclean all