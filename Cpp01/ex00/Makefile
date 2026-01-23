# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 12:30:32 by mipinhei          #+#    #+#              #
#    Updated: 2025/12/10 12:30:33 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

NAME = Zombie

CC = c++ -Wall -Werror -Wextra  -g -std=c++98
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all