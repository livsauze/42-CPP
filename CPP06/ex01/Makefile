

# ***********Color Definition************#
RED = \033[91m
YELLOW = \033[33m
GREEN = \033[92m
#****************************************#

NAME =  Serializer

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

INC = -I ./includes/

SRCS_DIR := src
SRCS := src/main.cpp src/Serializer.cpp

OBJS_DIR := obj
OBJS := $(patsubst $(SRCS_DIR)/%.cpp, $(OBJS_DIR)/%.o, $(SRCS))

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) $(INC) -c $< -o $@

${NAME} : $(OBJS)
	@echo "$(YELLOW)...Compiling...\n"
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN) Compilation OK ✅"

all : ${NAME}

clean :
	@rm -rf $(OBJS_DIR)
	@rm -rf *_shrubbery
	@echo "$(RED)Deleting object files\n"

fclean : clean
	@rm -f $(NAME)
	@echo "$(RED)Deleting executable\n"

re : fclean all

.PHONY : all clean fclean re