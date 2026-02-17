# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/17 12:29:14 by mipinhei          #+#    #+#              #
#    Updated: 2026/02/17 12:29:15 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRCS = main.cpp \
	Bureaucrat.cpp \
	Form.cpp

OBJS = $(patsubst %.cpp,%.o,$(SRCS))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: clean all

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<