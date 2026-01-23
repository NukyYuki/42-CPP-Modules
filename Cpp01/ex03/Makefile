# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 15:25:03 by mipinhei          #+#    #+#              #
#    Updated: 2025/12/10 15:25:22 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

NAME = Humans

CC = c++ -Wall -Werror -Wextra  -g -std=c++98
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all