#include "../include/push_swap.h"

int		is_sorted(t_ps *stk)
{
	t_ps *temp;
	int		index;

	temp = stk;
	index = 0;
	while (temp)
	{
		if (temp->key == index)
		{
			index++;
			temp = temp->next;
		}
		else
			return (0);
	}
	return (1);
}