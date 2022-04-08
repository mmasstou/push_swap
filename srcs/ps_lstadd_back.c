#include "../include/push_swap.h"

void	ps_lstadd_back(t_push_swap **lst, t_push_swap *new)
{

	t_push_swap	*n;
	t_push_swap	*tmp;

	if (*lst == NULL)
	{
		(*lst)->prev = NULL;
		*lst = new;
	}
	else
	{
		
		n = *lst;
		while (n->next != NULL)
		{
			tmp = n;
			n = n->next;
		}
		n->prev = tmp;
		n->next = new;
	}
}
