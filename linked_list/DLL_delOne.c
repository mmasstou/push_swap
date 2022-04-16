# include "DLL.h"

void	dll_delone(t_ps** head, char pos)
{
	t_ps *temp;
	int		size;

	size = dll_size(*head);
	if (size == 0)
		return ;
	if (pos == DLL_FIRST)
	{
		if ((*head)->next == NULL)
			(*head) = NULL;
		else
		{
			temp = (*head)->next->prev;
			(*head)->next->prev = NULL;
			free(temp);
			(*head) = (*head)->next;
		}
	}
	if (pos == DLL_LAST)
	{
		temp = (*head);
		if ((*head)->next == NULL)
			(*head) = NULL;
		else
		{
			while ((*head)->next != NULL)
				(*head) = (*head)->next;
			(*head)->prev->next = NULL;
			(*head) = temp;
		}
	}
}
