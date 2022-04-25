#include "../include/push_swap.h"

static char	**get_instration(void)
{
	char	**tab;

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