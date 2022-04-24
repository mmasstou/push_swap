#include "../include/push_swap.h"

char	**get_instration(void)
{
	char	**tab;
	int		index;

	index = 1;
	tab = (char **)malloc(sizeof(char *) * 12);
	if (!tab)
		ps_error("Erorr");
	tab[0] = ft_strdup("ra\n");
	tab[1] = ft_strdup("rb\n");
	tab[2] = ft_strdup("rr\n");
	tab[3] = ft_strdup("rra\n");
	tab[4] = ft_strdup("rrb\n");
	tab[5] = ft_strdup("rrr\n");
	tab[6] = ft_strdup("sa\n");
	tab[7] = ft_strdup("sb\n");
	tab[8] = ft_strdup("ss\n");
	tab[9] = ft_strdup("pa\n");
	tab[10] = ft_strdup("pb\n");
	tab[11] = NULL;
	return (tab);
}
int	check_instruction(char *inst)
{
	char	**instractions;
	int		index;

	instractions = get_instration();
	index = 0;
	while (instractions != NULL)
	{
		if (ft_strcmp(instractions[index], inst) == 0)
			return (0);
		index++;
	}
	return (1);
}
void	exicute_retate(t_stk **stk, char *instraction)
{
	if (ft_strcmp(instraction, "ra\n"))
		ra(*stk, P_NO);
	else if (ft_strcmp(instraction, "rb\n"))
		rb(*stk, P_NO);
	else if (ft_strcmp(instraction, "rr\n"))
		rr(*stk, P_NO);
}

void	exicute_retate_reverse(t_stk **stk, char *instraction)
{
	if (ft_strcmp(instraction, "rra\n"))
		rra(*stk, P_NO);
	else if (ft_strcmp(instraction, "rrb\n"))
		rrb(*stk, P_NO);
	else if (ft_strcmp(instraction, "rrr\n"))
		rrr(*stk, P_NO);
}
void	exicute_swap(t_stk **stk, char *instraction)
{
	if (ft_strcmp(instraction, "sa\n"))
		sa(*stk, P_NO);
	else if (ft_strcmp(instraction, "sb\n"))
		sb(*stk, P_NO);
	else if (ft_strcmp(instraction, "ss\n"))
		ss(*stk, P_NO);
}
void	exicute_push(t_stk **stk, char *instraction)
{
	if (ft_strcmp(instraction, "pa\n"))
		pa(*stk, P_NO);
	else if (ft_strcmp(instraction, "pb\n"))
		pb(*stk, P_NO);
}

void	exicute_instraction(t_stk **stk, char *instraction)
{
	exicute_retate(stk, instraction);
	exicute_retate_reverse(stk, instraction);
	exicute_swap(stk, instraction);
	exicute_push(stk, instraction);
}

void	manage_instructions(t_stk **stk)
{
	char	*buffer;

	while (1)
	{
		buffer = get_next_line(0);
		if (buffer == NULL)
			break ;
		if (check_instruction(buffer) == 1)
			ps_error("Error");
		exicute_instraction(stk, buffer);
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