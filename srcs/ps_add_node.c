#include "../include/push_swap.h"

t_ps_stk    *ps_addnode()
{
    t_ps_stk    *stk;

    stk = malloc(sizeof(t_ps_stk));
	stk->a = malloc(sizeof(t_push_swap));
    if (!stk || !stk->a)
        exit (1);
     
    return (stk);
}