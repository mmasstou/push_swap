#include "mouvements.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

void	sa(t_stk *stk)
{
	if (dll_size(stk->a) <= 1)
		return ;
	dll_swap(&stk->a);
	ft_putendl_fd("sa",1);
}