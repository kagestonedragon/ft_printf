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
SRC_MISC_PATH = sources/misc/
SRC_PARSE_PATH = sources/parse/
SRC_PARSE_FIND_PATH = sources/parse/find/
SRC_PARSE_FIND_LENGTH_PATH = sources/parse/find/length/
SRC_PARSE_INIT_PATH = sources/parse/init/
SRC_PARSE_SAVE_PATH = sources/parse/save/
SRC_PARSE_SAVE_LENGTH_PATH = sources/parse/save/length/
SRC_PARSE_SAVE_TYPE_PATH = sources/parse/save/type/
SRC_TESTS_PATH = sources/tests/
SRC_TRANSFORM_PATH = sources/transform/
SRC_TRANSFORM_BUFFER_PATH = sources/transform/buffer/
SRC_TRANSFORM_BUFFER_C_PATH = sources/transform/buffer/c/
SRC_TRANSFORM_BUFFER_D_PATH = sources/transform/buffer/d/
SRC_TRANSFORM_BUFFER_F_PATH = sources/transform/buffer/f/
SRC_TRANSFORM_BUFFER_S_PATH = sources/transform/buffer/s/
SRC_TRANSFORM_BUFFER_X_PATH = sources/transform/buffer/x/
SRC_TRANSFORM_TYPES_PATH = sources/transform/types/

SRC_FILES = ft_printf.c 
SRC_MISC_FILES = ft_atoi.c ft_bzero.c ft_itoa.c ft_itoa_base.c ft_itoa_l.c ft_itoa_ll.c ft_memset.c ft_power.c ft_strcat.c ft_strcat_1.c ft_strlen.c ft_strncmp.c skip_numbers.c toupper_str.c 
SRC_PARSE_FILES = parse.c 
SRC_PARSE_FIND_FILES = parse_flags.c parse_length.c parse_precision.c parse_type.c parse_width.c 
SRC_PARSE_FIND_LENGTH_FILES = find_length_h.c find_length_hh.c find_length_hl.c find_length_l.c find_length_ll.c 
SRC_PARSE_INIT_FILES = init.c init_flags.c init_length.c init_precision.c init_type.c init_width.c 
SRC_PARSE_SAVE_FILES = save_flags.c save_precision.c save_width.c 
SRC_PARSE_SAVE_LENGTH_FILES = save_length_h.c save_length_hh.c save_length_hl.c save_length_l.c save_length_ll.c 
SRC_PARSE_SAVE_TYPE_FILES = save_type_c.c save_type_d.c save_type_f.c save_type_hx.c save_type_i.c save_type_o.c save_type_p.c save_type_percent.c save_type_s.c save_type_u.c save_type_x.c 
SRC_TESTS_FILES = test_parse.c 
SRC_TRANSFORM_FILES = transform.c 
SRC_TRANSFORM_BUFFER_FILES = add_sign_to_buffer.c 
SRC_TRANSFORM_BUFFER_C_FILES = add_width_to_buffer_c.c create_buffer_c.c 
SRC_TRANSFORM_BUFFER_D_FILES = add_precision_to_buffer_d.c add_width_to_buffer_d.c create_buffer_d.c 
SRC_TRANSFORM_BUFFER_F_FILES = add_width_to_buffer_f.c create_buffer_f.c 
SRC_TRANSFORM_BUFFER_S_FILES = add_string_to_buffer.c add_width_to_buffer_s.c create_buffer_s.c 
SRC_TRANSFORM_BUFFER_X_FILES = add_width_to_buffer_x.c create_buffer_x.c 
SRC_TRANSFORM_TYPES_FILES = choose_length_decimal.c transform_c.c transform_d.c transform_d_add.c transform_f.c transform_percent.c transform_s.c 

OBJ__CORE = $(addprefix $(OBJ_PATH), $(SRC_FILES:.c=.o))
OBJ_MISC_CORE = $(addprefix $(OBJ_PATH), $(SRC_MISC_FILES:.c=.o))
OBJ_PARSE_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_FILES:.c=.o))
OBJ_PARSE_FIND_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_FIND_FILES:.c=.o))
OBJ_PARSE_FIND_LENGTH_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_FIND_LENGTH_FILES:.c=.o))
OBJ_PARSE_INIT_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_INIT_FILES:.c=.o))
OBJ_PARSE_SAVE_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_SAVE_FILES:.c=.o))
OBJ_PARSE_SAVE_LENGTH_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_SAVE_LENGTH_FILES:.c=.o))
OBJ_PARSE_SAVE_TYPE_CORE = $(addprefix $(OBJ_PATH), $(SRC_PARSE_SAVE_TYPE_FILES:.c=.o))
OBJ_TESTS_CORE = $(addprefix $(OBJ_PATH), $(SRC_TESTS_FILES:.c=.o))
OBJ_TRANSFORM_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_FILES:.c=.o))
OBJ_TRANSFORM_BUFFER_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_BUFFER_FILES:.c=.o))
OBJ_TRANSFORM_BUFFER_C_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_BUFFER_C_FILES:.c=.o))
OBJ_TRANSFORM_BUFFER_D_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_BUFFER_D_FILES:.c=.o))
OBJ_TRANSFORM_BUFFER_F_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_BUFFER_F_FILES:.c=.o))
OBJ_TRANSFORM_BUFFER_S_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_BUFFER_S_FILES:.c=.o))
OBJ_TRANSFORM_BUFFER_X_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_BUFFER_X_FILES:.c=.o))
OBJ_TRANSFORM_TYPES_CORE = $(addprefix $(OBJ_PATH), $(SRC_TRANSFORM_TYPES_FILES:.c=.o))

OBJECTS = $(OBJ__CORE) $(OBJ_MISC_CORE) $(OBJ_PARSE_CORE) $(OBJ_PARSE_FIND_CORE) $(OBJ_PARSE_FIND_LENGTH_CORE) $(OBJ_PARSE_INIT_CORE) $(OBJ_PARSE_SAVE_CORE) $(OBJ_PARSE_SAVE_LENGTH_CORE) $(OBJ_PARSE_SAVE_TYPE_CORE) $(OBJ_TESTS_CORE) $(OBJ_TRANSFORM_CORE) $(OBJ_TRANSFORM_BUFFER_CORE) $(OBJ_TRANSFORM_BUFFER_C_CORE) $(OBJ_TRANSFORM_BUFFER_D_CORE) $(OBJ_TRANSFORM_BUFFER_F_CORE) $(OBJ_TRANSFORM_BUFFER_S_CORE) $(OBJ_TRANSFORM_BUFFER_X_CORE) $(OBJ_TRANSFORM_TYPES_CORE) 

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

objects/%.o: $(SRC_MISC_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_FIND_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_FIND_LENGTH_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_INIT_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_SAVE_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_SAVE_LENGTH_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_PARSE_SAVE_TYPE_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TESTS_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_BUFFER_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_BUFFER_C_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_BUFFER_D_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_BUFFER_F_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_BUFFER_S_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_BUFFER_X_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

objects/%.o: $(SRC_TRANSFORM_TYPES_PATH)%.c | objects
		@($(GCC) $(GCC_FLAGS) $(GCC_INCLUDE) -c $< -o $@)
		@(echo $< "->" $@)

