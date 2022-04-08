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
			printf("prev = 0\ndata = %d\nnext = %d\n----------------------------------------------------\n",stk_a->data, stk_a->next->data);
		}
		else if (stk_a->next == NULL)
		{
			printf("prev = %d\ndata = %d\nnext = 0\n----------------------------------------------------\n", stk_a->prev->data, stk_a->data);
		}
		else	
			printf("prev = %d\ndata = %d\nnext = %d\n----------------------------------------------------\n",stk_a->data, stk_a->next->data);
		stk_a = stk_a->next;
	}
}
