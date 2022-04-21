#include "../include/push_swap.h"

void	pa(t_stk *stk)
{
	t_ps *temp;

	temp = dll_addnew(stk->b->data, stk->b->key);
	dll_addfront(&(stk->a), temp->data, temp->key);
	dll_delone(&(stk->b), DLL_FIRST);
	ft_putendl_fd("pa",1);
}
void	pb(t_stk *stk)
{
	t_ps *temp;

	if (stk->a == NULL)
		return;
	temp = dll_addnew(stk->a->data, stk->a->key);
	dll_addfront(&(stk->b), temp->data, temp->key);
	dll_delone(&(stk->a), DLL_FIRST);
	ft_putendl_fd("pb",1);
}