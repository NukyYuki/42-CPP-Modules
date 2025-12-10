# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 12:30:29 by mipinhei          #+#    #+#              #
#    Updated: 2025/12/10 12:30:30 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp main.cpp PhoneBook.cpp

NAME = PhoneBook

CC = c++ -Wall -Werror -Wextra  -g -std=c++98
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all