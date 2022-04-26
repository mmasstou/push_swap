NAME			= push_swap
BONUSNAME		= checker_ps
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
LIBFT_DIR		= libft/
LIBFT_NAME		= libft.a
DLL_DIR			= linked_list
SLL_DIR			= single_Linked_List
INSTR			= Instructions
SLL_SRC			= $(SLL_DIR)/SLL_swap.c $(SLL_DIR)/SLL_reverse.c $(SLL_DIR)/SLL_lstsize.c $(SLL_DIR)/SLL_lstnew.c  $(SLL_DIR)/SLL_lstlast.c $(SLL_DIR)/SLL_lstdelone.c $(SLL_DIR)/SLL_lstadd_front.c $(SLL_DIR)/SLL_lstadd_back.c  $(SLL_DIR)/SLL_lstclear.c
# DLL_SRC			= $(DLL_DIR)/DLL_findEnd.c $(DLL_DIR)/DLL_rotate.c $(DLL_DIR)/DLL_addBack.c $(DLL_DIR)/DLL_addFront.c $(DLL_DIR)/DLL_addnew.c $(DLL_DIR)/DLL_delOne.c $(DLL_DIR)/DLL_isEmty.c $(DLL_DIR)/DLL_print_frent.c $(DLL_DIR)/DLL_size.c $(DLL_DIR)/DLL_swap.c 

INSTR_SRC		= $(INSTR)/INSTRswap.c $(INSTR)/INSTRrotate.c  $(INSTR)/INSTRrotate_reverse.c $(INSTR)/INSTRpush.c  

SRCS			=  srcs/cheak_argv.c srcs/ps_errors.c srcs/ps_isdigit.c srcs/manage_args.c srcs/PsIndexing.c srcs/PsDoubleValue.c srcs/Ps_sorte.c srcs/Ps_getIndexOfMinValue.c srcs/Ps_positionOfKey.c  srcs/getMiddle.c srcs/Ps_sorte_tow.c srcs/Ps_sorte_three.c srcs/Ps_sorte_four.c srcs/Ps_sorte_five.c srcs/find_position_key.c srcs/Ps_sorte_big_nbrs.c srcs/create_env.c srcs/is_sorted.c 

BONUS_SRC = srcs/checker.c srcs/check_instruction_bonus.c  srcs/exicute_instraction_bonus.c srcs/manage_instructions_bonus.c 
GET_NEXT_SRC	= get_next_line/get_next_line.c  get_next_line/get_next_line_utils.c

OBJS			= $(SRCS:.c=.o)
BONUS_OBJS			= $(BONUS_SRC:.c=.o)
# DLL_ObJ			= $(DLL_SRC:.c=.o)
SLL_ObJ			= $(SLL_SRC:.c=.o)
INSTR_OBJ		= $(INSTR_SRC:.c=.o)
GET_NEXT_OBJ	= $(GET_NEXT_SRC:.c=.o)

%.o:%.c  
	@${CC} ${CFLAGS} -I . -o $@ -c $<
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m$< \033[0m\n"

all: $(NAME)

$(NAME): $(OBJS) $(SLL_ObJ) $(INSTR_OBJ) _libft
	$(CC) $(CFLAGS) $(SRCS) $(SLL_SRC) srcs/push_swap.c  $(INSTR_SRC) $(LIBFT_NAME) -o $(NAME) -g

linked :  $(SLL_ObJ)
	@gcc $(CFLAGS)  $(SLL_ObJ) -o linkedList -g 
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m[Done]\033[0m\n"

inst:  $(OBJS) $(SLL_ObJ) $(INSTR_OBJ) _libft
	@gcc $(CFLAGS)  $(SLL_SRC) $(OBJS) $(INSTR_SRC) $(LIBFT_NAME) -o instr -g 

_libft : 
	@make bonus -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)$(LIBFT_NAME) .

bonus : $(GET_NEXT_OBJ) _libft $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(SRCS) $(SLL_SRC) $(INSTR_SRC) $(BONUS_OBJS)  $(LIBFT_NAME) $(GET_NEXT_SRC) -o $(BONUSNAME) -g

push:fclean
	@git status
	@read -p "Files To Add:" files; git add "$$files" 
	@ read -p "Message:" message; \
	git commit -m "$$message"; \
	git push origin master

clean:
	@rm -rf $(SLL_ObJ) $(INSTR_OBJ) $(OBJS) $(BONUS_OBJS)
	@make clean -C  $(LIBFT_DIR)

fclean: clean
	@rm -rf $(NAME) $(LIBFT_NAME) dll

re: fclean all

.PHONY : all $(NAME) clean fclean bonus re