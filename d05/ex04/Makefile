# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 22:09:06 by mmoullec          #+#    #+#              #
#    Updated: 2018/10/09 18:29:35 by mmoullec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=obc
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address
INCL=-Iincludes
OBJ=$(SRC:.cpp=.o)


SRC_PATH= src
SRC_NAME= Bureaucrat.class.cpp Form.class.cpp main.cpp \
ShrubberyCreationForm.class.cpp RobotomyRequestForm.class.cpp \
PresidentialPardonForm.class.cpp Intern.class.cpp \
OfficeBlock.class.cpp
OBJ_PATH= obj
OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) -lncurses

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(FLAGS) $(INCL) -o $@ -c $<

clean:
	@rm -rfv $(OBJ)
	@rm -rfv $(OBJ_PATH)

fclean: clean
	@rm -rfv $(NAME)

re : fclean all