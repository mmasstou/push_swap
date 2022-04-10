NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft/
LIBFT_NAME = libft.a


SRCS = srcs/push_swap.c srcs/cheak_argv.c srcs/ps_errors.c srcs/ps_isdigit.c srcs/manage_args.c  linked_list/ps_lstadd_back.c linked_list/ps_lstnew.c

all: _libft
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT_NAME) -o $(NAME) -g

_libft : 
	make bonus -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)$(LIBFT_NAME) .

push:fclean
	@git add .
	@read -p "Message:" message; \
	git commit -m "$$message"; \
	git push origin master
fclean:
	rm -rf $(NAME) $(LIBFT_NAME)
