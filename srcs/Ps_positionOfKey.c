#include "../include/push_swap.h"

int	position_of_key(t_ps *stack, int index)
{
	int		pos;
	t_ps	*temp;

	temp = stack;
	pos = 1;
	while (temp != NULL)
	{
		if (temp->key == index)
			break;
		pos++;
		temp = temp->next;
	}
	return (pos);
}