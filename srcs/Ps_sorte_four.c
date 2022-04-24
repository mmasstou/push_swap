#include "../include/push_swap.h"

void	ps_sorte_four(t_stk **stk)
{
	int		pos;
	int		index;

	index = get_index_of_min_value((*stk)->a);
	pos = position_of_key((*stk)->a, index);
	if (pos == 1)
	{
		pb(*stk, P_YES);
		ps_sorte_three(stk);
		pa(*stk, P_YES);
	}
	if (pos == 2)
	{
		sa(*stk, P_YES);
		pb(*stk, P_YES);
		ps_sorte_three(stk);
		pa(*stk, P_YES);
	}
	else if (pos == 3)
	{
		ra(*stk, P_YES);
		sa(*stk, P_YES);
		pb(*stk, P_YES);
		ps_sorte_three(stk);
		pa(*stk, P_YES);
	}
	else if (pos == 4)
	{
		rra(*stk, P_YES);
		pb(*stk, P_YES);
		ps_sorte_three(stk);
		pa(*stk, P_YES);
	}
	
}