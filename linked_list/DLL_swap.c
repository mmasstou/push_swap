#include "../include/push_swap.h"

void	dll_swap(t_push_swap **head)
{
	t_push_swap *temp;
	int			index;

	temp = *head;
	index = temp->data;
	temp->data = temp->next->data;
	temp->next->data = index;
}