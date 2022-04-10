#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_push_swap	*stk_a;
	char		**args;


	stk_a = malloc(sizeof(t_push_swap));
	if (!stk_a)
		return (1);
	args = cheak_args(argc, argv);
	stk_a = manage_args(args);
	while (stk_a != NULL)
	{
		if (stk_a->prev == NULL && stk_a->next != NULL)
		{
			printf("prev = NULL\n%s +> data = %d%s\nnext = %d\n-------------------------\n",_RED, stk_a->data,_END, stk_a->next->data);
		}
		else if (stk_a->next == NULL && stk_a->prev != NULL)
		{
			printf("prev = %d\n%s +> data = %d%s\nnext = NULL\n-------------------------\n", stk_a->prev->data,_RED, stk_a->data,_END);
		}
		else	
			printf("prev = %d\n%s +> data = %d%s\nnext = %d\n-------------------------\n", stk_a->prev->data,_RED, stk_a->data,_END, stk_a->next->data);
		stk_a = stk_a->next;
	}
}
