# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 12:31:18 by mipinhei          #+#    #+#              #
#    Updated: 2025/12/10 12:31:19 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Zombie.cpp main.cpp zombieHorde.cpp

NAME = ZombieHorde

CC = c++ -Wall -Werror -Wextra  -g -std=c++98
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all