#include "linked_list.h"

void	sll_retate(t_ps **head)
{
	// dell first
	t_ps *temp;

	temp = *head;
	if (sll_lstsize(temp) <= 1)
		return ;
	sll_lstlast(*head)->next = temp;
	*head = (*head)->next;
	temp->next = NULL;
}

void	sll_retate_reverse(t_ps **head)
{
	// dell last
	t_ps *temp;
	t_ps *last;

	if (sll_lstsize(*head) <= 1)
		return ;
	last = (*head);
	temp = sll_lstlast(*head);
	while (last->next->next != NULL)
		last = last->next;
	last->next = NULL;
	sll_lstadd_front(head, temp);
}

