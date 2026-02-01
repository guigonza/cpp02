# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    by Guille <Guille@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/01 17:36:41 by Guille            #+#    #+#              #
#    Updated: 2026/02/01 17:40:09 by Guille           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM_NAME	= fixed

COMPILER		= c++
COMPILE_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ_DIR			= obj
SOURCE_FILES	= main.cpp Fixed.cpp
OBJECT_FILES	= $(addprefix $(OBJ_DIR)/, $(SOURCE_FILES:.cpp=.o))

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJECT_FILES)
	$(COMPILER) $(COMPILE_FLAGS) $(OBJECT_FILES) -o $(PROGRAM_NAME)

$(OBJ_DIR)/%.o: %.cpp Fixed.hpp
	@mkdir -p $(OBJ_DIR)
	$(COMPILER) $(COMPILE_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re

