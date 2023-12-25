# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 09:44:46 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/07 10:45:17 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = Zombie.cpp  newZombie.cpp  randomChump.cpp

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
	