#include "../include/push_swap.h"

void	ra(t_stk *stk, int print_option)
{
	sll_retate(&(stk->a));
	if (print_option == P_YES)
		ft_putendl_fd("ra",1);
}

void	rb(t_stk *stk, int print_option)
{
	sll_retate(&(stk->b));
	if (print_option == P_YES)
		ft_putendl_fd("rb",1);
}

void	rr(t_stk *stk, int print_option)
{
	sll_retate(&(stk->b));
	sll_retate(&(stk->a));
	if (print_option == P_YES)
		ft_putendl_fd("rr",1);
}