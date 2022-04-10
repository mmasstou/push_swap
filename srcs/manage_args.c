#include "../include/push_swap.h"

t_push_swap *manage_args(char **args)
{
    int i;
	t_push_swap *stk;
	// t_push_swap *tmp;

    i = 0;
	stk = ps_lstnew(ft_atoi(args[i]));
	stk->prev = NULL;
    while(args[++i])
    {
        ps_lstadd_back(stk, ft_atoi(args[i]));
    }
    return (stk);
}