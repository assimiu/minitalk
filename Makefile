PATH_LIB= libft/
FTS=$(PATH_LIB)ft_atoi.o $(PATH_LIB)ft_bzero.o $(PATH_LIB)ft_calloc.o\
	$(PATH_LIB)ft_isalnum.o $(PATH_LIB)ft_isascii.o $(PATH_LIB)ft_isdigit.o\
	$(PATH_LIB)ft_isprint.o $(PATH_LIB)ft_memchr.o $(PATH_LIB)ft_memcmp.o\
	$(PATH_LIB)ft_memcpy.o $(PATH_LIB)ft_memmove.o $(PATH_LIB)ft_memset.o\
	$(PATH_LIB)ft_strchr.o $(PATH_LIB)ft_strdup.o $(PATH_LIB)ft_strlcat.o\
	$(PATH_LIB)ft_strlcpy.o $(PATH_LIB)ft_strlen.o $(PATH_LIB)ft_strncmp.o\
	$(PATH_LIB)ft_strnstr.o $(PATH_LIB)ft_strrchr.o $(PATH_LIB)ft_tolower.o\
	$(PATH_LIB)ft_toupper.o $(PATH_LIB)ft_strjoin.o $(PATH_LIB)ft_strtrim.o\
	$(PATH_LIB)ft_isalpha.o $(PATH_LIB)ft_substr.o $(PATH_LIB)ft_split.o\
	$(PATH_LIB)ft_itoa.o $(PATH_LIB)ft_strmapi.o $(PATH_LIB)ft_striteri.o\
	$(PATH_LIB)ft_putchar_fd.o $(PATH_LIB)ft_putnbr_fd.o $(PATH_LIB)ft_putstr_fd.o\
	$(PATH_LIB)ft_putendl_fd.o $(PATH_LIB)ft_putnbr_fd.o 

BONUS_O = $(PATH_LIB)ft_lstclear.o $(PATH_LIB)ft_lstdelone.o\
	$(PATH_LIB)ft_lstlast.o $(PATH_LIB)ft_lstadd_back.o $(PATH_LIB)ft_lstadd_front.o\
	$(PATH_LIB)ft_lstnew.o $(PATH_LIB)ft_lstsize.o $(PATH_LIB)ft_lstiter.o\
	$(PATH_LIB)ft_lstmap.o


CC = cc 

FT_CLI_SER = $(CC) $(FLGS) ft_client.c -o ft_client.o &&  $(CC) $(FLGS) ft_server.c -o ft_server.o 

RM = rm -f

FLGS = -Wall -Wextra -Werror

NAME = $(PATH_LIB)libft.a

all: $(FTS) $(NAME) 

$(NAME) : $(FTS)
	ar -rcs $(NAME) $(FTS)
	$(FT_CLI_SER)

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