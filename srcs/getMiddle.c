#include "../include/push_swap.h"

int	get_middle(t_ps *stack)
{
t_ps *s;
t_ps *f;

s = stack;
f = stack;
while (f != NULL && f->next != NULL)
{
	s = s->next;
	f = f->next->next;
}
return (s->key);
}