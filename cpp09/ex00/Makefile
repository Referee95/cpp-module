NAME = btc

SRCS = main.cpp BitcoinExchange.cpp  

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

all : $(NAME)

clean : 
	-rm -rf $(OBJS)
	
fclean :
	-rm -rf $(OBJS) $(NAME)

re : fclean all