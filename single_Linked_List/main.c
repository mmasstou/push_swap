#include "linked_list.h"

void	p_print(t_ps *stk_a)
{
	t_ps *stk_a_temp;

	stk_a_temp = stk_a;
	printf("\n");
	while (stk_a_temp != NULL)
	{
		printf("[%d] index [%d]\n",stk_a_temp->content,stk_a_temp->key);
		stk_a_temp = stk_a_temp->next;
	}
}

int main()
{
	t_ps *head;
	t_ps *temp;
	t_ps *temp1;

	head = NULL;
	// head = sll_lstnew(1996, 1);
	// sll_lstadd_back(&head, sll_lstnew(4242, 2));
	// sll_lstadd_front(&head, sll_lstnew(42, 0));
	// sll_lstadd_back(&head, sll_lstnew(1337, 3));
	temp = head;
	printf("** Head **\n");
	printf("Size :%d", sll_lstsize(head));
	p_print(head);
	// sll_lstdelone(&temp, DLL_LAST);
	// printf("** temp **\n");
	// printf("Size :%d", sll_lstsize(temp));
	// p_print(temp);

	// sll_lstdelone(&temp, DLL_FIRST);
	// printf("** temph **\n");
	// printf("Size :%d", sll_lstsize(temp));
	// p_print(temp);
	sll_reverse(&temp);
	printf("** reverse **\n");
	printf("Size :%d", sll_lstsize(temp));
	p_print(temp);

	sll_re_reverse(&temp);
	printf("**re reverse **\n");
	printf("Size :%d", sll_lstsize(temp));
	p_print(temp);
	sll_swap(&temp);
	printf("**swap **\n");
	printf("Size :%d", sll_lstsize(temp));
	p_print(temp);
}