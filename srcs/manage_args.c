#include "../include/push_swap.h"

t_ps *manage_args(char **args)
{
    int i;
	t_ps *stk;

    i = 0;
	stk = sll_lstnew(ft_atoi(args[i]), 0);
    while(args[++i])
		sll_lstadd_back(&stk, sll_lstnew(ft_atoi(args[i]), 0));
    return (stk);
}