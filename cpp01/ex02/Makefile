# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 15:42:14 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/11 15:42:15 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRCS = main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean : 
	@rm -rf $(OBJS)
fclean : clean
	@rm -rf $(OBJS) $(NAME)
	
re : fclean all