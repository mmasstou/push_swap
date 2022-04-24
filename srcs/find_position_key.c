#include "../include/push_swap.h"

int	find_position_key(t_ps  *stk, int key)
{
	int	pos;
	t_ps	*temp;

	temp = stk;
	pos = 0;
	while (temp != NULL)
	{
		if (temp->key == key)
			break;
		pos++;
		temp = temp->next;
	}
	return (pos);
}