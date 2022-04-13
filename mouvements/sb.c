#include "mouvements.h"
// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
void	sb(t_stk *stk)
{
	if (dll_size(stk->b) <= 1)
		return ;
	dll_swap(&stk->b);
	ft_putendl_fd("sb",1);
}