NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft/
LIBFT_NAME = libft.a


SRCS = srcs/push_swap.c srcs/cheak_argv.c  srcs/join_args.c srcs/ps_errors.c srcs/ps_isdigit.c

all: _libft
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT_NAME) -o $(NAME) -g

_libft : 
	make bonus -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)$(LIBFT_NAME) .