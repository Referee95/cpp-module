NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp  PmergeMe1.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror  -std=c++98

OBJS = ${SRCS:.cpp=.o}

%.o:%.cpp PmergeMe.hpp PmergeMe1.hpp
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