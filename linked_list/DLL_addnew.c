# include "DLL.h"

t_ps	*dll_addnew(int content)
{
	t_ps	*newelement;

	newelement = (t_ps *)malloc(sizeof(t_ps));
	if (!newelement)
		return (NULL);
	newelement->data = content;
	newelement->next = NULL;
	newelement->prev = NULL;
	return (newelement);
}