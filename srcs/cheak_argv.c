#include "../include/push_swap.h"

char	**cheak_args(int argc, char *arg[])
{
	int		j;
	char	*tab;
	char	*str;
	char	**args;

	j = 2;
	str = ft_strtrim(arg[1], " ");
	if (!arg[1] || str[0] == '\0')
		ps_error("Emty Args");
	tab = ft_strjoin(arg[1], " ");
	while (j < argc)
	{
		str = ft_strtrim(arg[j], " ");
		if (str[0] == '\0' || str[0] == '/')
			ps_error("Args Error !");
		tab = ft_strrejion(tab, " ");
		tab = ft_strrejion(tab, str);
		j++;
	}
	args = ft_split(tab, ' ');
	j = 0;
	while (args[j])
	{
		cheack_double_value((const char **)args, ft_atoi(args[j]), j);
		if (args[j][0] == '\0' || ps_isdigit(args[j]) == 0)
			ps_error("Error :not A NUmber");
		j++;
	}
	return (args);
}