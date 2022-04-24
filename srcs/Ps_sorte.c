#include "../include/push_swap.h"

void	ps_sorte(t_stk **stk, int argc)
{
	if (!is_sorted((*stk)->a))
	{
		if (argc == 2)
			ps_sorte_tow(stk);
		else if (argc == 3)
			ps_sorte_three(stk);
		else if (argc == 4)
			ps_sorte_four(stk);
		else if (argc == 5)
			ps_sorte_five(stk);
		else
			ps_sorte_big_nbrs(stk, argc);
	}
	else
		exit(0);
}