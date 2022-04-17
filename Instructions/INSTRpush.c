#include "../include/push_swap.h"

void	pa(t_stk *stk)
{
	t_ps *temp;

	temp = dll_addnew(stk->b->data);
	dll_addfront(&(stk->a), temp->data);
	dll_delone(&(stk->b), DLL_FIRST);
	ft_putendl_fd("pa",1);
}
void	pb(t_stk *stk)
{
	t_ps *temp;

	temp = dll_addnew(stk->a->data);
	dll_addfront(&(stk->b), temp->data);
	dll_delone(&(stk->a), DLL_FIRST);
	ft_putendl_fd("pb",1);
}