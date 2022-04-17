NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft/
LIBFT_NAME = libft.a
DLL_DIR = linked_list
INSTR = Instructions

DLL_SRC = $(DLL_DIR)/DLL_findEnd.c $(DLL_DIR)/DLL_rotate.c $(DLL_DIR)/DLL_addBack.c $(DLL_DIR)/DLL_addFront.c $(DLL_DIR)/DLL_addnew.c $(DLL_DIR)/DLL_delOne.c $(DLL_DIR)/DLL_isEmty.c $(DLL_DIR)/DLL_print_frent.c $(DLL_DIR)/DLL_size.c $(DLL_DIR)/DLL_swap.c $(DLL_DIR)/main.c

INSTR_SRC = $(INSTR)/DLLswap.c
SRCS = srcs/push_swap.c srcs/cheak_argv.c srcs/ps_errors.c srcs/ps_isdigit.c srcs/manage_args.c  linked_list/ps_lstadd_back.c linked_list/ps_lstnew.c
DLL_ObJ = $(DLL_SRC:.c=.o)
%.o:%.c  
		@${CC} ${CFLAGS} -I . -o $@ -c $<
		@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m$< \033[0m\n"
all: _libft
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT_NAME) -o $(NAME) -g

dll :  $(DLL_ObJ)
	@gcc $(CFLAGS)  $(DLL_ObJ) -o dll -g 
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m[Done]\033[0m\n"
	
_libft : 
	make bonus -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)$(LIBFT_NAME) .
	
push:fclean
	@read -p "Message:" message; \
	git commit -m "$$message"; \
	git push origin master

clean:
	rm -rf $(DLL_ObJ)
fclean: clean
	rm -rf $(NAME) $(LIBFT_NAME) dll
