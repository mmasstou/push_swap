# include "DLL.h"

void	dll_swap(t_ps **head)
{
	// t_ps *temp;
	t_ps *i;
	t_ps *j;
	// int			index;

	// if (dll_size(*head) <= 1)
	// 	return ;
	// temp = *head;
	// index = temp->data;
	// temp->data = temp->next->data;
	// temp->next->data = index;
	i = *head;
	j = (*head)->next;

	(*head)->next = j->next;
	(*head)->prev = NULL;
	dll_addfront(head, j->data, j->key);
}