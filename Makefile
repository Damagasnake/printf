NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_pointersp.c    printf_utils.c	ft_printf_hex.c	ft_printf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re