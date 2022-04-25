#include "../include/push_swap.h"

static void	make_push(t_stk **stk)
{
	pb(*stk, P_YES);
	ps_sorte_four(stk);
	pa(*stk, P_YES);
}
static void	five_else(t_stk **stk, int pos)
{
	if (pos == 3)
	{
		ra(*stk, P_YES);
		sa(*stk, P_YES);
		make_push(stk);
	}
	else if (pos == 4)
	{
		rra(*stk, P_YES);
		rra(*stk, P_YES);
		make_push(stk);
	}
	else if (pos == 5)
	{
		rra(*stk, P_YES);
		make_push(stk);
	}
}
void	ps_sorte_five(t_stk **stk)
{
	int		pos;

	pos = get_index_of_min_value((*stk)->a);
	pos = position_of_key((*stk)->a, pos);
	if (pos == 1)
		make_push(stk);
	else if (pos == 2)
	{
		sa(*stk, P_YES);
		make_push(stk);
	}
	five_else(stk, pos);
}