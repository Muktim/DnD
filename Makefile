include .env
export

RUNCOMMAND= ./DnD ${numPlayer} ${playerClasses}

NAME = DnD
CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

INC_PATH = ./INC/UTILITY
#./INC/CHARACTER ./INC/ENVIRONMENT ./INC/OBJECTS ./INC/UTILITY -I.
INC = -I $(INC_PATH)

SRC_PATH = ./SRC/
SRC =	main.cpp 
#\
# 		DND.cpp \
# 		Map.cpp \
# 		Player.cpp

SRCS = $(addprefix $(SRC_PATH), $(SRC))

OBJ_PATH = ./OBJ/
OBJ = $(SRCS:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)

all: $(OBJ_PATH) $(NAME)
	@ ${RUNCOMMAND}

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $@ $(INC)

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all

valgrind: re
	@valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes --track-origins=yes --verbose --log-file=valgrind-out.txt ${RUNCOMMAND}

.PHONY: all clean fclean re