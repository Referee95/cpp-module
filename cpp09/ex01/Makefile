NAME = RPN

SRCS = main.cpp RPN.cpp  

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

%.o:%.cpp RPN.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean : 
	@rm -rf $(OBJS)
	
fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : clean