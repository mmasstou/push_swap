# include "DLL.h"

int	dll_size(t_ps *head)
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