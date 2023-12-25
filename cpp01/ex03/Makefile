# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 15:42:29 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/15 09:53:01 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  main

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp

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