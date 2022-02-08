NAME = program

AR = @ar
AR_FLAGS = -rcs

COMPILER = @gcc
COMPILER_FLAGS = -Wall -Werror -Wextra -Iincludes/

# Configuration

# Libft...
LIBFT			=	libft.a
LIBFT_FOLDER	=	./libraries/libft

# Source Files...
SOURCE_FOLDER	=	./srcs
SOURCE_FILES	=	ft_example.c

# Build Folder
BUILD_FOLDER	=	./build
BUILD_FILES		=	$(addprefix $(BUILD_FOLDER)/, $(LIBFT))

# Object Files...
EXTRA_FOLDERS	=	$(SOURCE_FOLDER)
OBJECT_FOLDER	=	./objects
OBJECT_FILES	=	$(addprefix $(OBJECT_FOLDER)/, $(addprefix $(SOURCE_FOLDER)/, $(SOURCE_FILES:.c=.o)))

.PHONY =  $(NAME) all clean fclean re dev

# Compile the .c files to .o files...
$(OBJECT_FOLDER)/%.o: %.c
	@mkdir -p $(OBJECT_FOLDER) $(addprefix $(OBJECT_FOLDER)/, $(dir $<))
	@echo "Compiling \t$(notdir $<) (100%)"
	@$(COMPILER) $(COMPILER_FLAGS) -c $< -o $@

# Compile the program...
$(NAME): $(LIBFT) $(OBJECT_FILES)
	@echo "Building \t$(NAME)... (100%)"
	$(COMPILER) $(COMPILER_FLAGS) $(OBJECT_FILES) $(BUILD_FILES) -o $(NAME)

# Compile Libft...
$(LIBFT):
	@echo "Compiling \t$(LIBFT)..."
	@$(MAKE) all -C $(LIBFT_FOLDER)
	@mkdir -p $(BUILD_FOLDER)
	@mv $(addprefix $(LIBFT_FOLDER)/, $(LIBFT)) $(addprefix $(BUILD_FOLDER)/, $(LIBFT))

all: $(NAME)

# Remove the `object` folder and files...
clean:
	@rm -rf $(OBJECT_FILES) $(OBJECT_FOLDER)

# Remove the `object` and `build` folder and files...
fclean: clean
	@rm -rf $(NAME)

# Clean the program up and re-compile it...
re: fclean all

# Re-compile the program and run the script...
dev: re
	@echo "Running \t$(NAME)..."
	@./$(NAME)
