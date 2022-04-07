#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_ps_stk	*stk;

	stk = malloc(sizeof(t_ps_stk));
	stk->a = malloc(sizeof(t_push_swap));
	stk->b = malloc(sizeof(t_push_swap));
	if (!stk && !stk->a && !stk->b)
		return (1);
	cheak_args(stk, argc, argv);
}