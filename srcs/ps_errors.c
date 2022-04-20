#include "../include/push_swap.h"

void	ps_error(char *msg)
{
	ft_printf("%s%s%s%s\n",_RED,_BOLD, msg, _END);
	exit(1);
}