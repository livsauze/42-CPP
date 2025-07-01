# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/05 16:15:12 by livsauze          #+#    #+#              #
#    Updated: 2025/07/01 14:15:03 by livsauze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ***********Color Definition************#
RED = \033[91m
YELLOW = \033[33m
GREEN = \033[92m
#****************************************#

NAME =  Array

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

INC = -I ./includes/

SRCS_DIR := src
SRCS := src/main.cpp

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
	@echo "$(RED)Deleting object files\n"

fclean : clean
	@rm -f $(NAME)
	@echo "$(RED)Deleting executable\n"

re : fclean all

.PHONY : all clean fclean re