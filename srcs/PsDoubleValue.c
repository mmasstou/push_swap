#include "../include/push_swap.h"

void	cheack_double_value(const char **args, int value , int index)
{
	if (index == 0)
		return ;
	while (index && args[--index])
	{
		if (ft_atoi(args[index]) == value)
			ps_error("Error");
	}
}