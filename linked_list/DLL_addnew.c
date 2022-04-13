#include "../include/push_swap.h"

t_push_swap	*ps_lstnew(int content)
{
	t_push_swap	*newelement;

	newelement = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!newelement)
		return (NULL);
	newelement->data = content;
	newelement->next = NULL;
	newelement->prev = NULL;
	return (newelement);
}