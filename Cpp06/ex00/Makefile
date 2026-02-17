# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/17 12:29:45 by mipinhei          #+#    #+#              #
#    Updated: 2026/02/17 12:29:46 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ScalarConverter.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
NAME = convert
INCLUDES = ScalarConverter.hpp


all: $(NAME)
$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all	