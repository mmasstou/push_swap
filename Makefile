NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft/
LIBFT_NAME = libft.a
DLL_DIR = linked_list
INSTR = Instructions

DLL_SRC = $(DLL_DIR)/DLL_findEnd.c $(DLL_DIR)/DLL_rotate.c
INSTR_SRC = $(INSTR)/DLLswap.c
SRCS = srcs/push_swap.c srcs/cheak_argv.c srcs/ps_errors.c srcs/ps_isdigit.c srcs/manage_args.c  linked_list/ps_lstadd_back.c linked_list/ps_lstnew.c
DLL_ObJ = ()
all: _libft
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT_NAME) -o $(NAME) -g

linked_list : 
	gcc $(CFLAGS)  $(DLL_SRC) -o dll -g 
	make clean -C .
	
_libft : 
	make bonus -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)$(LIBFT_NAME) .

push:fclean
	@read -p "Message:" message; \
	git commit -m "$$message"; \
	git push origin master
fclean:
	rm -rf $(NAME) $(LIBFT_NAME)
