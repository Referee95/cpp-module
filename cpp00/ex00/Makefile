# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 11:55:03 by ykhalil-          #+#    #+#              #
#    Updated: 2023/07/27 16:51:58 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

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