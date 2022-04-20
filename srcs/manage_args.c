#include "../include/push_swap.h"
// void	indexing_stack(t_ps *stk)
// {
// 	int	i;
// 	while ()
// }

t_ps *manage_args(char **args)
{
    int i;
	t_ps *stk;
	// t_ps *tmp;

    i = 0;
	stk = dll_addnew(ft_atoi(args[i]), 0);
	stk->prev = NULL;
    while(args[++i])
        dll_addback(stk, ft_atoi(args[i]), 0);
	// indexing_stack(stk);
    return (stk);
}