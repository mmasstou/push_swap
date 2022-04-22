#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "ps_colors.h"
# include "../linked_list/DLL.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647


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
void	sa(t_stk *stk);
void	sb(t_stk *stk);
void	ss(t_stk *stk);
void	ra(t_stk *stk);
void	rb(t_stk *stk);
void	rr(t_stk *stk);
void	rra(t_stk *stk);
void	rrb(t_stk *stk);
void	rrr(t_stk *stk);
void	pa(t_stk *stk);
void	pb(t_stk *stk);
// srcs
char	**cheak_args(int argc, char *arg[]);
t_ps	*manage_args(char **args);
int		ps_isdigit(char	*str);
void	ps_error(char *msg);
void	cheack_double_value(const char **args, int value , int index);
void	ps_sorte(t_stk **stk, int argc);
int		get_index_of_min_value(t_ps *stack);
int		position_of_key(t_ps *stack, int index);
void	ps_print(t_ps *stk_a);
int		get_middle(t_ps *stack);

#endif