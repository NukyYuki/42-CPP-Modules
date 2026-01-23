# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 14:00:13 by mipinhei          #+#    #+#              #
#    Updated: 2025/12/17 14:00:14 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp Fixed.cpp

NAME = Fixed

CC = c++ -Wall -Werror -Wextra  -g -std=c++98
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all