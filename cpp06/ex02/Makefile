NAME = Identify

SRCS = main.cpp Base.cpp 

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

clean :
	@-rm -rf $(OBJS)

fclean :
	@-rm -rf $(OBJS) $(NAME)

re : fclean all
