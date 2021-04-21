NAME = libmx.a
CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -g

SOURCES = main.c mx_printchar.c mx_printstr.c mx_printint.c mx_pow.c mx_sqrt.c \
mx_foreach.c mx_binary_search.c mx_strlen.c mx_strcpy.c mx_strcmp.c \
mx_strnew.c mx_strdup.c mx_print_strarr.c mx_bubble_sort.c mx_quicksort.c mx_itoa.c \
mx_print_unicode.c mx_swap_char.c

SRCD = src
SRCS = $(addprefix $(SRCD)/, $(SOURCES))

INCD = inc
INC = libmx.h
INCS = $(addprefix $(INCD)/, $(INC))

OBJDIR = obj
OBJECTS = $(SOURCES:.c=.o)
#OBJ = $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o, $(wildcard *.c)))
OBJ = $(addprefix $(OBJDIR)/, $(SOURCES:%.c=%.o))

all:$(OBJDIR) install

install:$(NAME)
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o libmx.a

$(OBJDIR)/%.o:$(SRCD)/%.c $(INCS) 
	@$(CC) $(CFLAGS) -I$(INCD) -c $< -o $@ 

#$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	@rm -f $(NAME) $(wildcard *.o)
	@rm -rf $(OBJDIR)