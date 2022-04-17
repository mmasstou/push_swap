#include "../include/push_swap.h"

void	sa(t_stk *stk)
{
	if (dll_size(stk->a) <= 1)
		return ;
	dll_swap(&stk->a);
	ft_putendl_fd("sa",1);
}

void	sb(t_stk *stk)
{
	if (dll_size(stk->b) <= 1)
		return ;
	dll_swap(&stk->b);
	ft_putendl_fd("sb",1);
}

void	ss(t_stk *stk)
{
	if (dll_size(stk->a) <= 1)
		return ;
	if (dll_size(stk->b) <= 1)
		return ;
	dll_swap(&stk->a);
	dll_swap(&stk->b);
	ft_putendl_fd("ss",1);
}