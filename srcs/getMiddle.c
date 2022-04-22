#include "../include/push_swap.h"

int	get_middle(t_ps *stack)
{
t_ps *s;
t_ps *f;
if (stack == NULL)
	return (-1);
s = stack;
f = stack;
while (f != NULL && f->next != NULL)
{
	s = s->next;
	f = f->next->next;
}
return (s->key);
}