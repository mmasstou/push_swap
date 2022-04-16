#ifndef DLL_H
# define DLL_H

# include <stdbool.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct push_swap
{
	struct push_swap	*prev;
	int					key;
	int					data;
	struct push_swap	*next;
}	t_ps;
# define DLL_FIRST 'f'
# define DLL_LAST 'l'

t_ps	*dll_addnew(int content);
void	dll_addback(t_ps *head, int data);
void 	dll_addfront(t_ps **head, int data);
void	dll_delone(t_ps **head, char pos);
bool 	isempty(t_ps *head);
int		dll_size(t_ps *head);
void	dll_swap(t_ps **head);
void 	DLL_PrintFront(t_ps *head);
void 	DLL_PrintBack(t_ps *head);
void	dll_retate(t_ps **head);
void	dll_retate_reverse(t_ps **head);


#endif
