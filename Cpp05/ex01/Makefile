NAME = Bureaucrat

# Source files
SRCS = main.cpp \
	Bureaucrat.cpp \
	Form.cpp

OBJS = $(patsubst %.cpp,%.o,$(SRCS))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

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