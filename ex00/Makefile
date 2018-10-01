NAME=megaphone
SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o) 

CC = g++ -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) -o $@ -c $<

clean: 
	@rm -rfv $(OBJ)

fclean: clean
	@rm -rfv $(NAME)

re : fclean all
