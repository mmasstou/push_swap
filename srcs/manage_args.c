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
	stk = sll_lstnew(ft_atoi(args[i]), 0);
    while(args[++i])
		sll_lstadd_back(&stk, sll_lstnew(ft_atoi(args[i]), 0));
	// dll_addback(stk, ft_atoi(args[i]), 0);
	// indexing_stack(stk);
    return (stk);
}