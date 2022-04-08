#include "../include/push_swap.h"

char	**cheak_args(int argc, char *arg[])
{
	int		j;
	char	*tab;
	char	*str;
	char	**args;
	char	**args_f;

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
		// printf("str = %s\n",str);
		tab = ft_strrejion(tab, " ");
		tab = ft_strrejion(tab, str);
		j++;
	}
	args = ft_split(tab, ' ');
	
	j = 0;
	args_f = args;
	while (*args)
	{
		if (*args[0] == '\0' || !ps_isdigit(*args))
		{
			printf("%c\n", *args[0]);
			exit(1);
		}
		args++;
		j++;
	}
	return (args_f);
}