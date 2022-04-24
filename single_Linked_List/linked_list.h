#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define _END  "\x1b[0m"
# define _BOLD  "\x1b[1m"
# define _UNDER  "\x1b[4m"
# define _REV  "\x1b[7m"

// # Colors
# define _GREY  "\x1b[30m"
# define _RED  "\x1b[31m"
# define _GREEN  "\x1b[32m"
# define _YELLOW  "\x1b[33m"
# define _BLUE  "\x1b[34m"
# define _PURPLE  "\x1b[35m"
# define _CYAN  "\x1b[36m"
# define _WHITE  "\x1b[37m"

// # Inverted, i.e. colored backgrounds
# define _IGREY  "\x1b[40m"
# define _IRED  "\x1b[41m"
# define _IGREEN  "\x1b[42m"
# define _IYELLOW  "\x1b[43m"
# define _IBLUE  "\x1b[44m"
# define _IPURPLE  "\x1b[45m"
# define _ICYAN  "\x1b[46m"
# define _IWHITE  "\x1b[47m"

typedef struct s_linked_list
{
	int						content;
	int						key;
	struct s_linked_list	*next;
} t_ps;

# define DLL_FIRST 'f'
# define DLL_LAST 'l'

t_ps	*ft_lstnew(int content, int key);
int		ft_lstsize(t_ps *lst);
t_ps	*ft_lstlast(t_ps *lst);
void	ft_lstadd_front(t_ps **lst, t_ps *new);
void	ft_lstadd_back(t_ps **lst, t_ps *new);
void	ft_lstdelone(t_ps	**lst, char pos);
void	ft_reverse(t_ps **head);
void	ft_re_reverse(t_ps **head);
void	sll_swap(t_ps **head);

# endif