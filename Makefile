CC=	cc 
CFLAGS = -Wall -Wextra -Werror
NAME= libftprintf.a
AR=ar rcs
RM = rm -f
SRC = ft_printf.c \
ft_char.c ft_str.c \
ft_unsigned.c \
ft_ulong.c \
ft_number_signed.c \
ft_pointer.c
OBJ= $(SRC:.c=.o)
all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean : 
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re