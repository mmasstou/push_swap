# include "DLL.h"
void	dll_retate(t_ps **head)
{
	t_ps *temp;
	if (dll_size(*head) <= 1)
		exit(0) ;
	printf (" ++ dll_retate ++ \n");
	temp = (*head);
	dll_addback(*head, temp->data);
	dll_delone(head, DLL_FIRST);
	printf("Done \n");

}

void	dll_retate_reverse(t_ps **head_rev)
{
	t_ps *temp;

	if (isempty(*head_rev)||dll_size(*head_rev) <= 1)
		exit(0) ;
	printf (" ++ dll_retate_reverse ++ \n");
	temp = (*head_rev);
	while (temp->next != NULL)
		temp = temp->next;
	dll_addfront(head_rev, temp->data);
	dll_delone(head_rev, DLL_LAST);
	printf("rev Done \n");
}