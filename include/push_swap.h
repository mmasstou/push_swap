#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "ps_colors.h"

typedef struct push_swap
{
	int					data;
	struct push_swap	*next;
	struct push_swap	*prev;

}	t_push_swap;

typedef struct ps_stk
{
	t_push_swap	*a;
	t_push_swap	*b;
} t_ps_stk;


void	cheak_args(t_ps_stk *stk, int argc, char *arg[]);
int		ps_isdigit(char	*str);
void	ps_error(char *msg);
#endif