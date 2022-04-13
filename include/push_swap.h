#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "ps_colors.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647
typedef struct push_swap
{
	int					data;
	int					key;
	struct push_swap	*next;
	struct push_swap	*prev;

}	t_push_swap;

typedef struct ps_stk
{
	t_push_swap	*a;
	t_push_swap	*b;
} t_stk;

struct Stack {
    int top;
    unsigned capacity;
    t_push_swap* array;
};

char		**cheak_args(int argc, char *arg[]);
t_push_swap	*manage_args(char **args);
int			ps_isdigit(char	*str);
void		ps_error(char *msg);

// DLL
int		dll_size(t_push_swap *head);
void	dll_swap(t_push_swap **head);

// link list 
t_push_swap	*ps_lstnew(int content);
void		ps_lstadd_back(t_push_swap *head, int data);

#endif