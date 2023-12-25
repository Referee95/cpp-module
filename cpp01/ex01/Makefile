# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 11:17:48 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/11 13:30:10 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = Zombie.cpp zombieHorde.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) main.cpp
		$(CC) $(CFLAGS) $^ -o $(NAME)

clean :
	@rm -rf $(OBJS)
fclean : clean
	@rm -rf $(OBJS) $(NAME)
	
re : fclean all
