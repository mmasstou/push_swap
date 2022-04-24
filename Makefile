NAME			= push_swap
BONUSNAME		= checker
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
LIBFT_DIR		= libft/
LIBFT_NAME		= libft.a
DLL_DIR			= linked_list
INSTR			= Instructions

DLL_SRC			= $(DLL_DIR)/DLL_findEnd.c $(DLL_DIR)/DLL_rotate.c $(DLL_DIR)/DLL_addBack.c $(DLL_DIR)/DLL_addFront.c $(DLL_DIR)/DLL_addnew.c $(DLL_DIR)/DLL_delOne.c $(DLL_DIR)/DLL_isEmty.c $(DLL_DIR)/DLL_print_frent.c $(DLL_DIR)/DLL_size.c $(DLL_DIR)/DLL_swap.c 

INSTR_SRC		= $(INSTR)/INSTRswap.c $(INSTR)/INSTRrotate.c  $(INSTR)/INSTRrotate_reverse.c $(INSTR)/INSTRpush.c  

SRCS			= srcs/push_swap.c  srcs/cheak_argv.c srcs/ps_errors.c srcs/ps_isdigit.c srcs/manage_args.c srcs/PsIndexing.c srcs/PsDoubleValue.c srcs/Ps_sorte.c srcs/Ps_getIndexOfMinValue.c srcs/Ps_positionOfKey.c srcs/ps_print.c srcs/getMiddle.c srcs/Ps_sorte_tow.c srcs/Ps_sorte_three.c srcs/Ps_sorte_four.c srcs/Ps_sorte_five.c srcs/find_position_key.c srcs/Ps_sorte_big_nbrs.c srcs/create_env.c srcs/is_sorted.c

GET_NEXT_SRC	= get_next_line/get_next_line.c  get_next_line/get_next_line_utils.c

OBJS			= $(SRCS:.c=.o)
DLL_ObJ			= $(DLL_SRC:.c=.o)
INSTR_OBJ		= $(INSTR_SRC:.c=.o)
GET_NEXT_OBJ	= $(GET_NEXT_SRC:.c=.o)

%.o:%.c  
	@${CC} ${CFLAGS} -I . -o $@ -c $<
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m$< \033[0m\n"

all: $(NAME)

$(NAME): $(OBJS) $(DLL_ObJ) $(INSTR_OBJ) _libft
	$(CC) $(CFLAGS) $(SRCS) $(DLL_SRC) $(INSTR_SRC) $(LIBFT_NAME) -o $(NAME) -g

linked :  $(DLL_ObJ)
	@gcc $(CFLAGS)  $(DLL_ObJ) -o linkedList -g 
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m[Done]\033[0m\n"

inst:  $(OBJS) $(DLL_ObJ) $(INSTR_OBJ) _libft
	@gcc $(CFLAGS)  $(DLL_SRC) $(OBJS) $(INSTR_SRC) $(LIBFT_NAME) -o instr -g 

_libft : 
	@make bonus -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)$(LIBFT_NAME) .

bonus : $(GET_NEXT_OBJ)
	$(CC) $(CFLAGS) $(SRCS) $(DLL_SRC) $(INSTR_SRC) $(LIBFT_NAME) $(GET_NEXT_SRC) -o $(BONUSNAME) -g

push:fclean
	@git status
	@read -p "Files To Add:" files; git add "$$files" 
	@ read -p "Message:" message; \
	git commit -m "$$message"; \
	git push origin master

clean:
	@rm -rf $(DLL_ObJ) $(INSTR_OBJ) $(OBJS)
	@make clean -C  $(LIBFT_DIR)

fclean: clean
	@rm -rf $(NAME) $(LIBFT_NAME) dll

re: fclean all

.PHONY : all $(NAME) clean fclean bonus re