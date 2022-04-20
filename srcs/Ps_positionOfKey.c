#include "../include/push_swap.h"

int	position_of_key(t_ps *stack, int index)
{
	int	pos;

	pos = 1;
	while (stack != NULL)
	{
		if (stack->key == index)
			break;
		pos++;
		stack = stack->next;
	}
	return (pos);
}