# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/17 12:29:09 by mipinhei          #+#    #+#              #
#    Updated: 2026/02/17 12:29:10 by mipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

# Source files
SRCS = main.cpp \
	Bureaucrat.cpp

OBJS = $(patsubst %.cpp,%.o,$(SRCS))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Auto-generated dependency files
DEPS = $(OBJS:.o=.d)

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

# Include auto-generated dependency files
-include $(DEPS)