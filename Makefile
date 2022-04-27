NAME			= push_swap
BONUSNAME		= checker
LIBFT_NAME		= libft.a

CC				= cc
CFLAGS			= -Wall -Wextra -Werror

LIBFT_DIR		= libft/
SLL_DIR			= single_Linked_List
INSTR			= Instructions

SLL_SRC			= $(SLL_DIR)/SLL_swap.c $(SLL_DIR)/SLL_reverse.c $(SLL_DIR)/SLL_lstsize.c $(SLL_DIR)/SLL_lstnew.c  \
					$(SLL_DIR)/SLL_lstlast.c $(SLL_DIR)/SLL_lstdelone.c $(SLL_DIR)/SLL_lstadd_front.c $(SLL_DIR)/SLL_lstadd_back.c  $(SLL_DIR)/SLL_lstclear.c

INSTR_SRC		= $(INSTR)/INSTRswap.c $(INSTR)/INSTRrotate.c  $(INSTR)/INSTRrotate_reverse.c $(INSTR)/INSTRpush.c  

SRCS			=  srcs/cheak_argv.c srcs/ps_errors.c srcs/ps_isdigit.c srcs/manage_args.c srcs/PsIndexing.c srcs/PsDoubleValue.c  srcs/is_sorted.c  srcs/free_tab.c

MANDATORY_SRC	= srcs/push_swap.c srcs/Ps_sorte.c srcs/Ps_getIndexOfMinValue.c srcs/Ps_positionOfKey.c  srcs/getMiddle.c \
		srcs/Ps_sorte_tow.c srcs/Ps_sorte_three.c srcs/Ps_sorte_four.c srcs/Ps_sorte_five.c srcs/find_position_key.c srcs/Ps_sorte_big_nbrs.c srcs/create_env.c

BONUS_SRC 		= srcs/checker.c srcs/exicute_instraction_bonus.c srcs/manage_instructions_bonus.c  get_next_line/get_next_line.c  get_next_line/get_next_line_utils.c

OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS_SRC:.c=.o)
MANDATORY_OBJS	= $(MANDATORY_SRC:.c=.o)
SLL_ObJ			= $(SLL_SRC:.c=.o)
INSTR_OBJ		= $(INSTR_SRC:.c=.o)

%.o:%.c  
	@${CC} ${CFLAGS}  -o $@ -c $<
	@printf "\x1b[36m   +>\033[0m compiling \033[38;5;42m$< \033[0m\n"

all: $(NAME)

$(NAME): _libft $(OBJS) $(SLL_ObJ) $(INSTR_OBJ) $(MANDATORY_OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(SLL_ObJ) $(MANDATORY_OBJS)  $(INSTR_OBJ) $(LIBFT_NAME) -o $(NAME)
	@echo "\x1b[36m   +> MANDATORY \033[0m\033[38;5;42m [Done] \033[0m";

_libft : 
	@make bonus -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)$(LIBFT_NAME) .

bonus : _libft $(OBJS) $(SLL_ObJ) $(INSTR_OBJ)  $(BONUS_OBJS) 
	@$(CC) $(CFLAGS) $(OBJS) $(SLL_ObJ) $(INSTR_OBJ) $(BONUS_OBJS)  $(LIBFT_NAME) -o $(BONUSNAME)
	@echo "\x1b[36m   +> BONUS \033[0m\033[38;5;42m [Done] \033[0m";


push:fclean
	@git status
	@read -p "Files To Add:" files; git add "$$files" 
	@ read -p "Message:" message; \
	git commit -m "$$message"; \
	git push origin master

clean:
	@rm -rf $(SLL_ObJ) $(INSTR_OBJ) $(OBJS) $(BONUS_OBJS) $(MANDATORY_OBJS)
	@make clean -C  $(LIBFT_DIR)

fclean: clean
	@rm -rf $(NAME) $(LIBFT_NAME) $(BONUSNAME) 
	@make fclean -C  $(LIBFT_DIR)

re: fclean all

.PHONY : all $(NAME) clean fclean bonus re