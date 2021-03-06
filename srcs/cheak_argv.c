/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:38:25 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/26 05:58:45 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	args_join(char **tab, char *arg[], int *j)
{
	char	*str;

	str = ft_strtrim(arg[*j], " ");
	if (str[0] == '\0' || str[0] == '/')
		ps_error("Error");
	*tab = ft_strrejoin(*tab, " ");
	*tab = ft_strrejoin(*tab, str);
	free(str);
	(*j)++;
}

char	**cheak_args(int argc, char *arg[])
{
	int		j;
	char	*tabe;
	char	*str;
	char	**args;

	j = 2;
	str = ft_strtrim(arg[1], " ");
	if (!arg[1] || str[0] == '\0')
		ps_error("Error");
	free(str);
	tabe = ft_strjoin(arg[1], " ");
	while (j < argc)
		args_join(&tabe, arg, &j);
	args = ft_split(tabe, ' ');
	free(tabe);
	j = -1;
	while (args[++j])
	{
		cheack_double_value((const char **)args, ft_atoi(args[j]), j);
		if (args[j][0] == '\0' || ps_isdigit(args[j]) == 0)
			ps_error("Error");
	}
	return (args);
}
