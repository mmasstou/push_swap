#include "../include/push_swap.h"

void	cheak_args(t_ps_stk *stk, int argc, char *arg[])
{
	int		j;
	char	*tab;
	char	*str;
	char	**args;
	t_ps_stk *temp;

	temp = malloc(sizeof(t_ps_stk));
	temp->a = malloc(sizeof(t_push_swap));
	temp->b = malloc(sizeof(t_push_swap));
	if (!temp && !temp->a && !temp->b)
		return;
	j = 2;
	tab = ft_strjoin(arg[1], " ");
	while (j < argc)
	{
		str = ft_strtrim(arg[j], " ");
		if (str[0] == '\0' || str[0] == '/')
		{
			printf("Args Error !\n");
			exit(1);
		}
		printf("str = %s\n",str);
		tab = ft_strrejion(tab, " ");
		tab = ft_strrejion(tab, str);
		j++;
	}
	args = ft_split(tab, ' ');
	
	j = 0;
	stk->a->prev = NULL;
	temp->a = stk->a ;
	while (*args)
	{
		if (*args[0] == '\0')
		{
			printf("%c\n", *args[0]);
			exit(1);
		}
		if (ps_isdigit(*args))
		{
			printf("%sargs[%2d]%s = %s%s%d%s\n",_WHITE, j, _END, _BOLD, _BLUE, ft_atoi(*args), _END);
		}
		else
		{
			// Arg Error
			printf("Args Error !\n");
			exit(1);
		}
		args++;
		j++;
	}
}