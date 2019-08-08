NAME = libftprintf.a

GCC = gcc
GCC_FLAGS = -Wall -Wextra -Werror

AR = ar
AR_FLAGS = rcs

SRC_PATH = sources/
OBJ_PATH = objects/
INC_PATH = includes/

GCC_INCLUDE = -I $(INC_PATH)

SRC_INIT_PATH = $(SRC_PATH)init/
SRC_PARSE_PATH = $(SRC_PATH)parse/
SRC_MISC_PATH = $(SRC_PATH)misc/
SRC_SAVE_PATH = $(SRC_PATH)save/
SRC_TEST_PATH = $(SRC_PATH)test/


SRC_PARSE_LENGTH_PATH = $(SRC_PARSE_PATH)length/
SRC_PARSE_TYPE_PATH = $(SRC_PARSE_PATH)type/

SRC_SAVE_LENGTH_PATH = $(SRC_SAVE_PATH)length/
SRC_SAVE_TYPE_PATH = $(SRC_SAVE_PATH)type/

MAIN_FILE = ft_printf.c

SRC_INIT_FILES = init.c init_flags.c init_length.c init_precision.c init_type.c init_width.c

SRC_PARSE_FILES = parse.c parse_flags.c parse_length.c parse_precision.c parse_type.c parse_width.c parse_temporary.c
SRC_PARSE_LENGTH_FILES = find_length_h.c find_length_hh.c find_length_hl.c find_length_l.c find_length_ll.c
SRC_PARSE_TYPE_FILES = find_type_c.c find_type_d.c find_type_f.c find_type_hx.c find_type_i.c find_type_o.c find_type_p.c find_type_s.c find_type_u.c find_type_x.c

SRC_MISC_FILES = ft_atoi.c ft_strncmp.c skip_letters.c skip_numbers.c

SRC_SAVE_FILES = save_flags.c save_precision.c save_width.c
SRC_SAVE_LENGTH_FILES = save_length_h.c save_length_hh.c save_length_hl.c save_length_l.c save_length_ll.c
SRC_SAVE_TYPE_FILES = save_type_c.c save_type_d.c save_type_f.c save_type_hx.c save_type_i.c save_type_o.c save_type_p.c save_type_s.c save_type_u.c save_type_x.c

SRC_TEST_FILES = test_parse.c

MAIN_FILE_CORE = $(addprefix $(SRC_PATH), $(MAIN_FILE))
SRC_INIT_CORE = $(addprefix $(SRC_INIT_PATH), $(SRC_INIT_FILES))
SRC_PARSE_CORE = $(addprefix $(SRC_PARSE_PATH), $(SRC_PARSE_FILES))
SRC_PARSE_CORE_LENGTH = $(addprefix $(SRC_PARSE_LENGTH_PATH), $(SRC_PARSE_LENGTH_FILES))
SRC_PARSE_CORE_TYPE = $(addprefix $(SRC_PARSE_TYPE_PATH), $(SRC_PARSE_TYPE_FILES))
SRC_MISC_CORE = $(addprefix $(SRC_MISC_PATH), $(SRC_MISC_FILES))
SRC_SAVE_CORE = $(addprefix $(SRC_SAVE_PATH), $(SRC_SAVE_FILES))
SRC_SAVE_CORE_LENGTH = $(addprefix $(SRC_SAVE_LENGTH_PATH), $(SRC_SAVE_LENGTH_FILES))
SRC_SAVE_CORE_TYPE = $(addprefix $(SRC_SAVE_TYPE_PATH), $(SRC_SAVE_TYPE_FILES))
SRC_TEST_CORE = $(addprefix $(SRC_TEST_PATH), $(SRC_TEST_FILES))

OBJ_MAIN_CORE = $(addprefix $(OBJ_PATH), $(MAIN_FILE:.c=.o))
OBJ_INIT_CORE = $(addprefix $(OBJ_PATH), $(SRC_INIT_FILES:.c=.o))
OBJ_PARSE_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_FILES:.c=.o))
OBJ_PARSE_CORE_LENGTH = $(addprefix $(OBJ_PATH), $(SRC_PARSE_LENGTH_FILES:.c=.o))
OBJ_PARSE_CORE_TYPE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_TYPE_FILES:.c=.o))
OBJ_MISC_CORE = $(addprefix $(OBJ_PATH), $(SRC_MISC_FILES:.c=.o))
OBJ_SAVE_CORE = $(addprefix $(OBJ_PATH), $(SRC_SAVE_FILES:.c=.o))
OBJ_SAVE_CORE_LENGTH = $(addprefix $(OBJ_PATH), $(SRC_SAVE_LENGTH_FILES:.c=.o))
OBJ_SAVE_CORE_TYPE = $(addprefix $(OBJ_PATH), $(SRC_SAVE_TYPE_FILES:.c=.o)) 
OBJ_TEST_CORE = $(addprefix $(OBJ_PATH), $(SRC_TEST_FILES:.c=.o))

OBJECTS = $(OBJ_MAIN_CORE) $(OBJ_INIT_CORE) $(OBJ_PARSE_CORE) $(OBJ_PARSE_CORE_LENGTH) $(OBJ_PARSE_CORE_TYPE) $(OBJ_MISC_CORE) $(OBJ_SAVE_CORE) $(OBJ_SAVE_CORE_LENGTH) $(OBJ_SAVE_CORE_TYPE) $(OBJ_TEST_CORE)

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
	$(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@
	@(echo $< "->" $@)

objects/%.o: $(SRC_INIT_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_LENGTH_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)
	
objects/%.o: $(SRC_PARSE_TYPE_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)

objects/%.o: $(SRC_MISC_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)

objects/%.o: $(SRC_SAVE_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)

objects/%.o: $(SRC_SAVE_LENGTH_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)

objects/%.o: $(SRC_SAVE_TYPE_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)

objects/%.o: $(SRC_TEST_PATH)%.c | objects
	@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
	@(echo $< "->" $@)
