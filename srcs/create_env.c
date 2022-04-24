#include "../include/push_swap.h"

static int	create_range(int argc)
{
	if (argc <= 250)
		return (15);
	return (25);
}

t_env	*create_env(int argc)
{
	t_env	*env;

	env = (t_env *)malloc(sizeof(t_env));
	if (!env)
		ps_error("Error");
	env->s_index = 1;
	env->e_index = create_range(argc);
	return (env);
}
