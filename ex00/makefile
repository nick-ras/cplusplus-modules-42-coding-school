
NAME = Megaphone

MAKE = make
CC = g++
RM = rm -Rf
CFLAG = -Wall -Werror -Wextra -I. # current directory searched first

SRC_DIR = 	./src/
OBJ_DIR =   ./obj/
SRC_FILES = Megaphone.cpp

OBJ_FILES = ${SRC_FILES:.cpp=.o}
SRC			= $(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ			= $(addprefix $(OBJ_DIR),$(OBJ_FILES))

${NAME}: ${OBJ}
			${CC} -o ${NAME} ${CFLAG} ${OBJ}
all: ${NAME}

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
			mkdir -p $(OBJ_DIR)
			${CC} ${CFLAG} -o $@ -c $^

clean:
			$(RM) ${OBJ_DIR}

fclean: clean
			$(RM) ${NAME}

re: fclean all

tests:	re $(NAME)
			./$(NAME) "shhhhh... I think the students are asleep..."
			./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
			./$(NAME)

.PHONY: all clean fclean re tests