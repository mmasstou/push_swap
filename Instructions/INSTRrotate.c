#include "../include/push_swap.h"

void	ra(t_stk *stk)
{
	dll_retate(&(stk->a));
	ft_putendl_fd("ra",1);
}

void	rb(t_stk *stk)
{
	dll_retate(&(stk->b));
	ft_putendl_fd("rb",1);
}

void	rr(t_stk *stk)
{
	dll_retate(&(stk->b));
	dll_retate(&(stk->a));
	ft_putendl_fd("rr",1);
}