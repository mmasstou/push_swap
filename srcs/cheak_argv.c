#include "../include/push_swap.h"
// static void	args_join(char *tab, char *arg[], int *j)
// {
// 	char	*str;
	

// 	str = ft_strtrim(arg[*j], " ");
// 	if (str[0] == '\0' || str[0] == '/')
// 		ps_error("Error");
// 	tab = ft_strrejoin(tab, " ");
// 	tab = ft_strrejoin(tab, str);
// 	(*j)++;
// }
char	**cheak_args(int argc, char *arg[])
{
	int		j;
	char	*tab;
	char	*str;
	char	**args;

	j = 2;
	str = ft_strtrim(arg[1], " ");
	if (!arg[1] || str[0] == '\0')
		ps_error("Error");
	tab = ft_strjoin(arg[1], " ");
	while (j < argc)
	{
		str = ft_strtrim(arg[j], " ");
		if (str[0] == '\0' || str[0] == '/')
			ps_error("Error");
		tab = ft_strrejoin(tab, " ");
		tab = ft_strrejoin(tab, str);
		j++;
	}
		// args_join(tab, arg, &j)
	args = ft_split(tab, ' ');
	j = 0;
	while (args[j])
	{
		cheack_double_value((const char **)args, ft_atoi(args[j]), j);
		if (args[j][0] == '\0' || ps_isdigit(args[j]) == 0)
			ps_error("Error");
		j++;
	}
	return (args);
}