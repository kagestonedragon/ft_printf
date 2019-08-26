NAME = libftprintf.a

GCC = gcc

GCC_FLAGS = -Wall -Wextra -Werror

AR = ar
AR_FLAGS = rcs

SRC_PATH = sources
OBJ_PATH = objects/
INC_PATH = includes

GCC_INCLUDE = -I $(INC_PATH)

SRC_PATH = sources/
SRC_COLLECTING_PATH = sources/collecting/
SRC_MISCELLANEOUS_PATH = sources/miscellaneous/
SRC_PARSING_PATH = sources/parsing/

SRC_FILES = ft_printf.c 
SRC_COLLECTING_FILES = collect_decimal.c collect_hexadecimal.c collect_octaldecimal.c collect_string.c collect_unsigned.c 
SRC_MISCELLANEOUS_FILES = pf_atoi.c pf_itoa.c pf_itoa_base.c pf_strcat.c string_tolower.c 
SRC_PARSING_FILES = initialization.c parse_flags.c parse_length.c parse_precision.c parse_type.c parse_width.c parsing.c 

OBJ__CORE = $(addprefix $(OBJ_PATH), $(SRC_FILES:.c=.o))
OBJ_COLLECTING_CORE = $(addprefix $(OBJ_PATH), $(SRC_COLLECTING_FILES:.c=.o))
OBJ_MISCELLANEOUS_CORE = $(addprefix $(OBJ_PATH), $(SRC_MISCELLANEOUS_FILES:.c=.o))
OBJ_PARSING_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSING_FILES:.c=.o))

OBJECTS = $(OBJ__CORE) $(OBJ_COLLECTING_CORE) $(OBJ_MISCELLANEOUS_CORE) $(OBJ_PARSING_CORE) 

all: $(NAME)

$(NAME): $(OBJECTS)
		@($(AR) $(AR_FLAGS) $(NAME) $(OBJECTS))
		@(ranlib $(NAME))
		@(echo $(NAME) "was created!")

clean:
		@(/bin/rm -rf $(OBJ_PATH))
		@(echo "All objects files have been deleted!")

fclean: clean
		@(/bin/rm -f $(NAME))
		@(echo $(NAME) "has been deleted!")

re: fclean all

objects:
		@(mkdir $(OBJ_PATH))

objects/%.o: $(SRC_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_COLLECTING_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_MISCELLANEOUS_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSING_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

