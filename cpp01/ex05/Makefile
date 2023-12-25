# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 15:34:07 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/15 09:53:05 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRCS = Harl.cpp

CC = c++

CFLGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) main.cpp
	$(CC) $(CFLGS) $^ -o $(NAME)
	
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(OBJS) $(NAME)

re : fclean all

