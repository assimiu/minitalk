CC := cc

CFLAGS := -Wall -Wextra -Werror

RM := /bin/rm -f

NAME_SERVER := server.o
NAME_CLIENT := client.o

SRC_SERVER := server.c
SRC_CLIENT := client.c

SRC_SERVER_BONUS := server_bonus.c minitalk_bonus.c
SRC_CLIENT_BONUS := client_bonus.c minitalk_bonus.c

INCLUDES := -I. -Ilibft

LIBFT := ./libft/libft.a
LIBFT_PATH := ./libft




all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_SERVER) $(LIBFT) -o $(NAME_SERVER)

$(NAME_CLIENT): $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_CLIENT) $(LIBFT) -o $(NAME_CLIENT)


$(LIBFT): $(shell make -C $(LIBFT_PATH) -q libft.a)
	make -C $(LIBFT_PATH)


clean:

fclean: $(clean)
	$(RM) $(NAME_SERVER) $(NAME_CLIENT)

re: $(fclean) $(all)

bonus: $(LIBFT) fclean
	$(CC) $(CFLAGS) $(SRC_SERVER_BONUS) $(LIBFT) -o $(NAME_SERVER)
	$(CC) $(CFLAGS) $(SRC_CLIENT_BONUS) $(LIBFT) -o $(NAME_CLIENT)

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus