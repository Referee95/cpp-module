# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 19:04:21 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/21 13:57:28 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CC = c++

CFLGS = -Wall -Werror -Wextra -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) main.cpp
	$(CC) $(CFLGS) $^ -o $(NAME)

clean :
	@rm -rf $(OBJS)
	
fclean : clean
	@rm -rf $(OBJS) $(NAME)

re : fclean all