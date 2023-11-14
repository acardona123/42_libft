NAME			=	libft.a
NAME_BONUS		=	libft_bonus.a

CC				=	cc
CFLAGS			=	-Werror -Wall -Wextra
DEPSFLAG		=	-MMD

SRC_DIR			=	src
FILES_NAMES		=	ft_atoi \
					ft_bzero \
					ft_calloc \
					ft_isalnum \
					ft_isalpha \
					ft_isascii \
					ft_isdigit \
					ft_isinset \
					ft_isprint \
					ft_itoa \
					ft_memchr \
					ft_memcmp \
					ft_memcpy \
					ft_memmove \
					ft_memset \
					ft_putchar_fd \
					ft_putendl_fd \
					ft_putnbr_fd \
					ft_putstr_fd \
					ft_split \
					ft_strchr \
					ft_strdup \
					ft_striteri \
					ft_strjoin \
					ft_strlcat \
					ft_strlcpy \
					ft_strlen \
					ft_strmapi \
					ft_strncmp \
					ft_strnstr \
					ft_strrchr \
					ft_strtrim \
					ft_substr \
					ft_tolower \
					ft_toupper

SRC_BONUS_DIR	=	src/bonus
FILES_NAMES_BONUS	=	ft_lstnew \
						ft_lstadd_front \
						ft_lstsize \
						ft_lstlast \
						ft_lstadd_back \
						ft_lstdelone \
						ft_lstclear \
						ft_lstiter \
						ft_lstmap

OBJ_DIR			=	obj
OBJ				=	$(addprefix $(OBJ_DIR)/, $(FILES_NAMES:=.o))
OBJ_BONUS_DIR	=	obj_bonus
OBJ_BONUS		=	$(addprefix $(OBJ_BONUS_DIR)/, $(FILES_NAMES_BONUS:=.o))
DEPS			=	$(addprefix $(OBJ_DIR)/, $(FILES_NAMES:=.d)) $(addprefix $(OBJ_BONUS_DIR)/, $(FILES_NAMES_BONUS:=.d))

all : $(NAME)

bonus : $(NAME_BONUS)

clean :
	@rm -rf $(OBJ_DIR)
	@rm -rf $(OBJ_BONUS_DIR)

fclean : clean
	@rm -rf $(NAME)
	@rm -rf $(NAME_BONUS)


re : fclean all

-include $(DEPS)

$(NAME) : $(OBJ)
	ar rc $(NAME) ${OBJ}

$(NAME_BONUS) : $(OBJ) $(OBJ_BONUS) 
	ar rc $(NAME_BONUS) ${OBJ} $(OBJ_BONUS)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c Makefile
	@mkdir -p $(OBJ_DIR)
	@if [ ! -d "$(dir $@)" ]; then mkdir $(dir $@); fi
	$(CC) $(CFLAGS) $(DEPSFLAG) -c $< -o $@

$(OBJ_BONUS_DIR)/%.o : $(SRC_BONUS_DIR)/%.c Makefile
	@mkdir -p $(OBJ_BONUS_DIR)
	@if [ ! -d "$(dir $@)" ]; then mkdir $(dir $@); fi
	$(CC) $(CFLAGS) $(DEPSFLAG) -c $< -o $@

.PHONY : all clean fclean re bonus