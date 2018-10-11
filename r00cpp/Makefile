# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:45:45 by svilau            #+#    #+#              #
#    Updated: 2018/10/07 22:32:52 by mmoullec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

MAKE = make
MAKE_FLAGS = --no-print-directory

CC = clang++
CC_FLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address
INCL = -Iincludes
NCURSES = -lncurses

SRC_PATH= src
SRC_NAME= main.cpp Window.class.cpp Vector.class.cpp Game.class.cpp \
AEntity.class.cpp \
Ship.class.cpp \
List.class.cpp \
ABullet.class.cpp \
Enemy.class.cpp \
Bullet.class.cpp

OBJ_PATH= obj
OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

RM = rm -f
RF = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@printf '\033[K\033[32m[✔] %s\n\033[0m' "--Compiling Sources--------"
	@$(CC) $(CC_FLAGS) -o $(NAME) $(OBJ) $(INCL) $(NCURSES)
	@printf '\033[1;7m'
	@printf '\033[33m[✔] %s\n\033[0m' "--DONE--------"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CC_FLAGS) $(INCL) -o $@ -c $<

clean:
	@rm -rfv $(OBJ)
	@rm -rfv $(OBJ_PATH)
	@printf '\033[1;7m'
	@printf '\033[31m[✔] %s\n\033[0m' "--Cleaning  Files--------"

###################################################
##--- Clean ALl                                  ##
###################################################

fclean: clean
	@printf '\033[1;7m'
	@printf '\033[31m[✔] %s\n\033[0m' "--Cleaning Executable and All Object--------"
	@$(RM) $(NAME)

re: fclean all
