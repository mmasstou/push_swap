#include "../include/push_swap.h"

static void	cheak_max_min(long *nbr, char c)
{	
	*nbr  = (*nbr) * 10 + c - 48;
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
	{
		if (!ft_isdigit(str[i]))
			return (0);
		cheak_max_min(&result, str[i]);
		if (result < INT_MIN || result > INT_MAX)
			ps_error("Error");
		i++;
	}
	return (1);
}