#include "../include/push_swap.h"

int	ps_isdigit(char	*str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}