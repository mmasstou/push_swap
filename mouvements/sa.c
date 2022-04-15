#include "mouvements.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

void	mvt_swap(t_stk *stk, char *type)
{
	if (ft_strcmp(type, "sa") == 0)
	{
		if (dll_size(stk->a) <= 1)
			return ;
		dll_swap(&stk->a);
	}
	else if (ft_strcmp(type, "sb") == 0)
	{
		if (dll_size(stk->b) <= 1)
			return ;
		dll_swap(&stk->b);
	}
	else if (ft_strcmp(type, "ss") == 0)
	{
		if (dll_size(stk->b) <= 1 )
			return ;
		dll_swap(&stk->b);
		if (dll_size(stk->a) <= 1)
			return ;
		dll_swap(&stk->a);
	}
	ft_putendl_fd(type,1);
}

void	mvt_rotate()
{
	
}
