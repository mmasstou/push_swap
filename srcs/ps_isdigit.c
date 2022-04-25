#include "../include/push_swap.h"

static void	cheak_max_min(long *nbr, char str, int *i)
{	
	if (!ft_isdigit(str))
		ps_error("Error");
	*nbr  = (*nbr) * 10 + str - 48;
	if (*nbr < INT_MIN || *nbr > INT_MAX)
		ps_error("Error");
	(*i)++;
}

int	ps_isdigit(char	*str)
{
	int		i;
	int		signe;
	long	result;

	i = 0;
	signe = 1;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -signe;
		if (str[i + 1] == '\0')
			ps_error("Error");
		i++;
	}
	result *= signe;
	while(str[i])
		cheak_max_min(&result, str[i], &i);
	return (1);
}