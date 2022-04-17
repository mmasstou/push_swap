#include "../include/push_swap.h"

void	rra(t_stk *stk)
{
	dll_retate_reverse(&(stk->a));
	ft_putendl_fd("rra",1);
}

void	rrb(t_stk *stk)
{
	dll_retate_reverse(&(stk->b));
	ft_putendl_fd("rrb",1);
}

void	rrr(t_stk *stk)
{
	dll_retate_reverse(&(stk->b));
	dll_retate_reverse(&(stk->a));
	ft_putendl_fd("rrr",1);
}