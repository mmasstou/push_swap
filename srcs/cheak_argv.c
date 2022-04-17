#include "../include/push_swap.h"

char	**cheak_args(int argc, char *arg[])
{
	int		j;
	char	*tab;
	char	*str;
	char	**args;
	char	**args_f;

	j = 2;
	printf("arg[1] |%s\n", arg[1]);
	str = ft_strtrim(arg[1], " ");
	printf("str |%s\n", str);
	if (!arg[1] || str[0] == '\0')
	{
		printf("Emty Args\n");
		exit(1);
	}
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
		cheak_double_arg();
		if (*args[0] == '\0' || ps_isdigit(*args) == 0)
		{
			printf("++++++%c\n", *args[0]);
			printf("Is not A NUmber\n");
			exit(1);
		}
		args++;
		j++;
	}
	return (args_f);
}