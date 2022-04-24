#include "linked_list.h"

void	sll_swap(t_ps **head)
{
	t_ps *j;

	if (ft_lstsize(*head) <= 1)
		return ;
	j = (*head)->next;
	(*head)->next = j->next;
	ft_lstadd_front(head, j);
}