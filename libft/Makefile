FTS=ft_atoi.o ft_bzero.o ft_calloc.o\
	ft_isalnum.o ft_isascii.o ft_isdigit.o\
	ft_isprint.o ft_memchr.o ft_memcmp.o\
	ft_memcpy.o ft_memmove.o ft_memset.o\
	ft_strchr.o ft_strdup.o ft_strlcat.o\
	ft_strlcpy.o ft_strlen.o ft_strncmp.o\
	ft_strnstr.o ft_strrchr.o ft_tolower.o\
	ft_toupper.o ft_strjoin.o ft_strtrim.o\
	ft_isalpha.o ft_substr.o ft_split.o\
	ft_itoa.o ft_strmapi.o ft_striteri.o\
	ft_putchar_fd.o ft_putnbr_fd.o ft_putstr_fd.o\
	ft_putendl_fd.o ft_putnbr_fd.o ft_printchar.o\
	ft_printnbr.o ft_printstr.o\
	ft_strlen.o ft_printf_hex.o ft_main_print.o\
	ft_printf.o ft_unsigned_int.o ft_print_pointer.o

BONUS_O = ft_lstclear.o ft_lstdelone.o\
	ft_lstlast.o ft_lstadd_back.o ft_lstadd_front.o\
	ft_lstnew.o ft_lstsize.o ft_lstiter.o\
	ft_lstmap.o

CC = cc 

RM = rm -f

FLGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(FTS) $(NAME)

$(NAME) : $(FTS)
	ar -rcs $(NAME) $(FTS)

%.o: %.c
	$(CC) $(FLGS) -c $< -o $@

clean:
	$(RM) $(FTS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: all $(BONUS_O)
	ar -rcs $(NAME) $(BONUS_O)

rebonus: fclean bonus

.PHONY:	all clean fclean re bonus