#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "ps_colors.h"
# include "../linked_list/DLL.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647


typedef struct ps_stk
{
	t_ps	*a;
	t_ps	*b;
} t_stk;

struct Stack {
    int top;
    unsigned capacity;
    t_ps* array;
};

char		**cheak_args(int argc, char *arg[]);
t_ps	*manage_args(char **args);
int			ps_isdigit(char	*str);
void		ps_error(char *msg);

// DLL
int		dll_size(t_ps *head);
void	dll_swap(t_ps **head);

// link list 
t_ps	*ps_lstnew(int content);
void		ps_lstadd_back(t_ps *head, int data);

#endif