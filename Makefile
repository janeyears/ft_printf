NAME = libftprintf.a
CC = cc
FLAGS  = -Wall -Wextra -Werror

RM	=	rm -f

AR	=	ar -rcs

INCLUDE	=	ft_printf.h

SOURCES	=	ft_printf.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putptr.c  \
		ft_putstr.c \
		ft_putuns.c \

OBJECTS	=	$(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJECTS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re 
