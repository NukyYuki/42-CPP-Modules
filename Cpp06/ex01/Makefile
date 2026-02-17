# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/17 12:29:54 by mipinhei          #+#    #+#              #
#    Updated: 2026/02/17 12:29:55 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
CPPFLAGS = -I..

SRCS = main.cpp Serializer.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = serializer
DEPS = Serializer.hpp Data.hpp

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(DEPS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all