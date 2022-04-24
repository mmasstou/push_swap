#include "linked_list.h"

void	p_prinsdsdt(t_ps *stk_a)
{
	t_ps *stk_a_temp;

	stk_a_temp = stk_a;
	printf("\n");
	while (stk_a_temp != NULL)
	{
		printf("%s[%d] index [%d]%s\n",_YELLOW,stk_a_temp->content,stk_a_temp->key, _END);
		stk_a_temp = stk_a_temp->next;
	}
}
void	ft_reverse(t_ps **head)
{
	// dell first
	t_ps *temp;

	temp = *head;
	if (ft_lstsize(temp) <= 1)
		return ;
	ft_lstlast(*head)->next = temp;
	*head = (*head)->next;
	temp->next = NULL;
}

void	ft_re_reverse(t_ps **head)
{
	// dell last
	t_ps *temp;
	t_ps *last;

	if (ft_lstsize(*head) <= 1)
		return ;
	last = (*head);
	temp = ft_lstlast(*head);
	while (last->next->next != NULL)
		last = last->next;
	last->next = NULL;
	ft_lstadd_front(head, temp);
}

