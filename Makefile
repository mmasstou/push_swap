NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft/
LIBFT_NAME = libft.a
DLL_DIR = linked_list
INSTR = Instructions

DLL_SRC = $(DLL_DIR)/DLL_findEnd.c $(DLL_DIR)/DLL_rotate.c $(DLL_DIR)/DLL_addBack.c $(DLL_DIR)/DLL_addFront.c $(DLL_DIR)/DLL_addnew.c $(DLL_DIR)/DLL_delOne.c $(DLL_DIR)/DLL_isEmty.c $(DLL_DIR)/DLL_print_frent.c $(DLL_DIR)/DLL_size.c $(DLL_DIR)/DLL_swap.c 

INSTR_SRC = $(INSTR)/INSTRswap.c $(INSTR)/INSTRrotate.c  $(INSTR)/INSTRrotate_reverse.c $(INSTR)/INSTRpush.c $(INSTR)/main.c

SRCS = srcs/push_swap.c  srcs/cheak_argv.c srcs/ps_errors.c srcs/ps_isdigit.c srcs/manage_args.c srcs/PsIndexing.c

DLL_ObJ = $(DLL_SRC:.c=.o)
INSTR_OBJ = $(INSTR_SRC:.c=.o)

%.o:%.c  
	@${CC} ${CFLAGS} -I . -o $@ -c $<
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m$< \033[0m\n"

all: _libft
	$(CC) $(CFLAGS) $(SRCS) $(LIBFT_NAME) -o $(NAME) -g

linked :  $(DLL_ObJ)
	@gcc $(CFLAGS)  $(DLL_ObJ) -o linkedList -g 
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m[Done]\033[0m\n"

inst:  $(DLL_ObJ) $(INSTR_OBJ) _libft
	@gcc $(CFLAGS)  $(DLL_ObJ) $(INSTR_OBJ) $(LIBFT_NAME) -o instr -g 

_libft : 
	@make bonus -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)$(LIBFT_NAME) .
	
push:fclean
	@read -p "Message:" message; \
	git commit -m "$$message"; \
	git push origin master

clean:
	@rm -rf $(DLL_ObJ) $(INSTR_OBJ)
	@make clean -C  $(LIBFT_DIR)

fclean: clean
	@rm -rf $(NAME) $(LIBFT_NAME) dll
.PHONY : 