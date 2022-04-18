# include "DLL.h"
void	dll_retate(t_ps **head)
{
	t_ps *temp;
	if (dll_size(*head) <= 1)
		return ;
	temp = (*head);
	dll_addback(*head, temp->data, temp->key);
	dll_delone(head, DLL_FIRST);
}

void	dll_retate_reverse(t_ps **head_rev)
{
	t_ps *temp;

	if (isempty(*head_rev)||dll_size(*head_rev) <= 1)
		return ;
	temp = (*head_rev);
	while (temp->next != NULL)
		temp = temp->next;
	dll_addfront(head_rev, temp->data, temp->key);
	dll_delone(head_rev, DLL_LAST);
}