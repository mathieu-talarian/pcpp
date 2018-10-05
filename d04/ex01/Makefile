NAME=aweapon
CC=clang++
FLAGS=-Wall -Werror -Wextra
INCL=-Iincludes
OBJ=$(SRC:.cpp=.o)


SRC_PATH= src
SRC_NAME= main.cpp AWeapon.class.cpp PowerFist.class.cpp PlasmaRifle.class.cpp \
RadScorpion.class.cpp Character.class.cpp \
Enemy.class.cpp

OBJ_PATH= obj
OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(FLAGS) $(INCL) -o $@ -c $<

clean:
	@rm -rfv $(OBJ)
	@rm -rfv $(OBJ_PATH)

fclean: clean
	@rm -rfv $(NAME)

re : fclean all