GREEN 		= \033[1;32m
RESET 		= \033[0m

CC			= c++ 
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
OBJ_DIR		= objects/
NAME		= account

FUNCTIONS = Account tests

SRC_FILES	= $(FUNCTIONS:=.cpp)
OBJ_FILES 	= $(addprefix $(OBJ_DIR), $(FUNCTIONS:=.o))

all: $(NAME)

$(NAME):		$(OBJ_FILES)
		@$(CC) $(CPPFLAGS) -o $@ $^

$(OBJ_DIR)%.o: %.cpp | $(OBJ_DIR)
		@$(CC) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo " $(GREEN)Clean successfully.$(RESET) ✅"

fclean: clean
	@rm -f $(NAME)
	@echo " $(GREEN)Full clean successfully.$(RESET) ✅"

re: fclean all

.PHONY: all clean fclean re