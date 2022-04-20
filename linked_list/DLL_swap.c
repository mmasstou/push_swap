# include "DLL.h"

void	dll_swap(t_ps **head)
{
	t_ps *j;

	j = (*head)->next;

	(*head)->next = j->next;
	(*head)->prev = NULL;
	dll_addfront(head, j->data, j->key);
}