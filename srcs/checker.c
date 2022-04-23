#include "../include/push_swap.h"
void	check_instruction(char *inst)
{

}

void	manage_instructions(t_stk **stk)
{
	char	*buffer;

	while (0)
	{
		buffer = get_next_line(0);
		check_instruction(buffer);
	}
	if (is_sorted((*stk)->a))
	{
		ft_putendl_fd("OK", 1);
		exit(0);
	}
	else
	{
		ft_putendl_fd("KO", 1);
		exit(0);
	}

}

int main(int argc, char *argv[])
{
	t_stk	*stk;
	// t_ps	*stk_a_temp;
	char		**args;

	if (argc <= 1)
		exit(1);
	stk = malloc(sizeof(t_stk));
	if (!stk)
		return (1);
	stk->a = malloc(sizeof(t_ps));
	stk->b = malloc(sizeof(t_ps));
	if (!stk->a || !stk->b)
		return (1);
	stk->b = NULL;
	args = cheak_args(argc, argv);
	stk->a = manage_args(args);
	manage_instructions(&stk);
}