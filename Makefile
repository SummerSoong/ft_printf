NAME =  libftprintf.a
SRCS =  ft_printf.c ft_hexconv.c ft_putchar.c ft_putstr.c ft_print_int.c ft_print_u.c
OBJS =  $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
$(NAME): $(OBJS)
		gcc -c $(FLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
all:	$(NAME)
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:	fclean all
.PHONY: all clean fclean re