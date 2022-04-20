#include "../include/push_swap.h"

int	get_index_of_min_value(t_ps *stack)
{
	int	index;

	index = stack->key;
	while (stack != NULL)
	{
		if (stack->key < index)
			index = stack->key;
		stack = stack->next;
	}
	return (index);
}