# include "DLL.h"

void	dll_swap(t_ps **head)
{
	t_ps *temp;
	int			index;

	if (dll_size(*head) <= 1)
		return ;
	temp = *head;
	index = temp->data;
	temp->data = temp->next->data;
	temp->next->data = index;
}