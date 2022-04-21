#include "../include/push_swap.h"

int	get_index_of_min_value(t_ps *stack)
{
	int		index;
	t_ps	*temp;

	temp = stack;
	index = temp->key;
	while (temp != NULL)
	{
		if (temp->key < index)
			index = temp->key;
		temp = temp->next;
	}
	return (index);
}