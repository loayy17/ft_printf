CC=	cc 
CFLAGS = -Wall -Wextra -Werror
NAME= libftprintf.a
AR=ar rcs
RM = rm -f
SRC = ft_printf.c
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