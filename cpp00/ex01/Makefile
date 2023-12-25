# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 11:56:08 by ykhalil-          #+#    #+#              #
#    Updated: 2023/08/03 16:41:40 by ykhalil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRCS = PhoneBook.cpp Contact.cpp \

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