NAME=ex02
CC=clang++
FLAGS=-Wall -Werror -Wextra
INCL=-Iincludes
OBJ=$(SRC:.cpp=.o)


SRC_PATH= src
SRC_NAME= main.cpp Zombie.class.cpp ZombieEvent.class.cpp

OBJ_PATH= obj
OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
		@mkdir $(OBJ_PATH) 2> /dev/null || true
		$(CC) $(FLAGS) $(INCL) -o $@ -c $<

clean: 
	@rm -rfv $(OBJ)

fclean: clean
	@rm -rfv $(NAME)

re : fclean all
