GREEN 		= \033[1;32m
RESET 		= \033[0m

CPP			= c++ 
CPPFLAGS	= -std=c++98 -Wall -Wextra  -g -Werror 
OBJ_DIR		= objects/
NAME		= ClapTrap

FUNCTIONS = ClapTrap main

SRC_FILES	= $(FUNCTIONS:=.cpp)
OBJ_FILES 	= $(addprefix $(OBJ_DIR), $(FUNCTIONS:=.o))

all: $(NAME)

$(NAME):		$(OBJ_FILES)
		@$(CPP) $(CPPFLAGS) -o $@ $^

$(OBJ_DIR)%.o:	%.cpp | $(OBJ_DIR)
		@$(CPP) $(CPPFLAGS) -c $< -o $@

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