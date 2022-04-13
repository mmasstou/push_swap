#include "../include/push_swap.h"

int	dll_size(t_push_swap *head)
{
	int	length;

	length = 0;
	while (head)
	{
		length++;
		head = head->next;
	}
	return (length);
}