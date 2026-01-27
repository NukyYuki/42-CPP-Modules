SRCS = ScalarConverter.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = convert
INCLUDES = ScalarConverter.hpp


all: $(NAME)
$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)