NAME  =     libmx.a
CFLG  =     -std=c11 -Wall -Wextra -Werror -Wpedantic -g
COMP  =     clang
SRCD  =     src
INCD  =     inc
OBJD  =     obj
INC         =     libmx.h
INCS  =     $(addprefix $(INCD)/, $(INC))
SRC   =     mx_printchar.c mx_printstr.c mx_printint.c mx_pow.c mx_sqrt.c \
mx_foreach.c mx_binary_search.c mx_strlen.c mx_strcpy.c mx_strcmp.c \
mx_strnew.c mx_strdup.c mx_print_strarr.c mx_bubble_sort.c mx_quicksort.c mx_itoa.c \
mx_print_unicode.c mx_swap_char.c mx_nbr_to_hex.c mx_str_reverse.c mx_strjoin.c mx_strdel.c \
mx_del_strarr.c mx_memset.c mx_file_len.c mx_file_to_str.c mx_strncpy.c mx_strndup.c \
mx_hex_to_nbr.c mx_memcpy.c mx_memcmp.c mx_realloc.c mx_getsize.c mx_create_node.c \
mx_push_front.c mx_push_back.c mx_pop_front.c 
SRCS  =     $(addprefix $(SRCD)/, $(SRC))
OBJS  =     $(addprefix $(OBJD)/, $(SRC:%.c=%.o))
all: install clean
install: $(NAME)
$(NAME): $(OBJS)
	@ar rcs $@ $^
	@printf "\r\33[2K$@\t   \033[32;1mcreated\033[0m\n"
$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
	@$(COMP) $(CFLG) -c $< -o $@ -I$(INCD)
	@printf "\r\33[2K$(NAME)\t   \033[33;1mcompile \033[0m$(<:$(SRCD)/%.c=%) "
$(OBJS): | $(OBJD)
$(OBJD):
	@mkdir -p $@
clean:
	@rm -rf $(OBJD)
	@printf "$(OBJD)\t   \033[31;1mdeleted\033[0m\n"
uninstall: clean
	@rm -rf $(NAME)
	@printf "$(NAME)\t   \033[31;1muninstalled\033[0m\n"
reinstall: uninstall install
start: 
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic main.c libmx.a && ./a.out