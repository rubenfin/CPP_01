CC = c++
CFLAGS = -Wall -Wextra -Werror -g -pedantic -std=c++11
SRCS = $(wildcard *.cpp) 
OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))

TARGET = Zombie

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
	@echo "$(GREEN)Compiled Zombie!$(DEFAULT)"

obj/%.o: %.cpp | obj
	@$(CC) $(CFLAGS) -c $< -o $@

obj:
	@mkdir -p obj

clean:
	@$(RM) -r obj/
	@echo "$(YELLOW)Removed all objects!$(DEFAULT)"

fclean: clean
	@$(RM) $(TARGET)
	@echo "$(RED)Removed Zombie!$(DEFAULT)"

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
