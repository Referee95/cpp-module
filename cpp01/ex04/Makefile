# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 11:38:32 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/14 09:00:58 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRCS = main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(CFLAGS) $^ -o $(NAME)
	
clean :
	@rm -rf $(OBJS)
fclean : clean
	@rm -rf $(OBJS) $(NAME)

re : fclean all