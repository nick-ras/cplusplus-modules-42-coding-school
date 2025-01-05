
NAME = harl

MAKE = make
CC = g++
RM = rm -rf
CFLAG = -Wall -Werror -Wextra -g3

SRC_DIR = 	./src/
OBJ_DIR =   ./obj/
SRC_FILES = main.cpp Harl.cpp

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

.PHONY: all clean fclean re