NAME=phonebook
CC=gcc -Wall -Werror -Wextra
OBJ=$(SRC:.cpp=.o)
SRC= \
trim.cpp\
Contact.class.cpp\
main.cpp

CHPP= -I Contact.class.hpp

all : $(NAME)

$(NAME): $(OBJ)

%.o: %.cpp
	$(CC) -o $a -c $< $(CHPP)