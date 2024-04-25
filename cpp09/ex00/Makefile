NAME = btc

SRCS = main.cpp BitcoinExchange.cpp  

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

%.o:%.cpp BitcoinExchange.hpp
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