#include "linked_list.h"

void	p_print(t_ps *stk_a)
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

int main()
{
	t_ps *head;
	t_ps *temp;
	t_ps *temp1;

	head = NULL;
	// head = ft_lstnew(1996, 1);
	// ft_lstadd_back(&head, ft_lstnew(4242, 2));
	// ft_lstadd_front(&head, ft_lstnew(42, 0));
	// ft_lstadd_back(&head, ft_lstnew(1337, 3));
	temp = head;
	printf("** Head **\n");
	printf("Size :%d", ft_lstsize(head));
	p_print(head);
	// ft_lstdelone(&temp, DLL_LAST);
	// printf("** temp **\n");
	// printf("Size :%d", ft_lstsize(temp));
	// p_print(temp);

	// ft_lstdelone(&temp, DLL_FIRST);
	// printf("** temph **\n");
	// printf("Size :%d", ft_lstsize(temp));
	// p_print(temp);
	ft_reverse(&temp);
	printf("** reverse **\n");
	printf("Size :%d", ft_lstsize(temp));
	p_print(temp);

	ft_re_reverse(&temp);
	printf("**re reverse **\n");
	printf("Size :%d", ft_lstsize(temp));
	p_print(temp);
	sll_swap(&temp);
	printf("**swap **\n");
	printf("Size :%d", ft_lstsize(temp));
	p_print(temp);
}