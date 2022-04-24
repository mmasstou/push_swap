#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "ps_colors.h"
// # include "../linked_list/DLL.h"
# include "../single_Linked_List/linked_list.h"
# include "../get_next_line/get_next_line.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define P_NO 1
# define P_YES 0

typedef struct ps_stk
{
	t_ps	*a;
	t_ps	*b;
} t_stk;

typedef struct env 
{
    int s_index;
    int e_index;
	int	middle;
	int	middle_position;
	int	size_stk_a;
	int	size_stk_b;
	int	max_key_position;

} 	t_env;

// Instructions
void	sa(t_stk *stk, int print_option);
void	sb(t_stk *stk, int print_option);
void	ss(t_stk *stk, int print_option);
void	ra(t_stk *stk, int print_option);
void	rb(t_stk *stk, int print_option);
void	rr(t_stk *stk, int print_option);
void	rra(t_stk *stk, int print_option);
void	rrb(t_stk *stk, int print_option);
void	rrr(t_stk *stk, int print_option);
void	pa(t_stk *stk, int print_option);
void	pb(t_stk *stk, int print_option);
// srcs
char	**cheak_args(int argc, char *arg[]);
t_ps	*manage_args(char **args);
int		ps_isdigit(char	*str);
void	ps_error(char *msg);
void	cheack_double_value(const char **args, int value , int index);
void	ps_indexing(t_ps **stack);
void	ps_sorte(t_stk **stk, int argc);
int		get_index_of_min_value(t_ps *stack);
int		position_of_key(t_ps *stack, int index);
void	ps_print(t_ps *stk_a);
int		get_middle(t_ps *stack);
int		is_sorted(t_ps *stk);
int		find_position_key(t_ps  *stk, int key);
void	ps_sorte_tow(t_stk **stk);
void	ps_sorte_three(t_stk **stk);
void	ps_sorte_four(t_stk **stk);
void	ps_sorte_five(t_stk **stk);
void	ps_sorte_big_nbrs(t_stk **stk, int argc);
t_env	*create_env(int argc);
// checker
int		check_instruction(char *inst);
void	exicute_instraction(t_stk **stk, char *instraction);
void	manage_instructions(t_stk **stk);
#endif 