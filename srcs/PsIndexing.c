#include "../include/push_swap.h"

void	ps_indexing(t_ps **stack)
{
	t_ps	*current;
	t_ps	*temp;
	int		i;
	int		j;

	current = *stack;
	j = 0;
	while (current != NULL)
	{
		i = 0;
		temp = *stack;
		while (temp != NULL)
		{
			j++;
			if (current->data > temp->data)
				i++;
			temp = temp->next;
		}
		current->key = i;
		current = current->next;
	}
	// printf("\n");
	// DLL_PrintFront(*stack);
	// printf("%d\n",j);
}