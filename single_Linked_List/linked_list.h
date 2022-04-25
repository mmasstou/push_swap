/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:00:07 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 22:00:57 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_linked_list
{
	int						data;
	int						key;
	struct s_linked_list	*next;
}	t_ps;

# define DLL_FIRST 'f'
# define DLL_LAST 'l'

t_ps	*sll_lstnew(int content, int key);
int		sll_lstsize(t_ps *lst);
t_ps	*sll_lstlast(t_ps *lst);
void	sll_lstadd_front(t_ps **lst, t_ps *new);
void	sll_lstadd_back(t_ps **lst, t_ps *new);
void	sll_lstdelone(t_ps	**lst, char pos);
void	sll_retate(t_ps **head);
void	sll_retate_reverse(t_ps **head);
void	sll_swap(t_ps **head);

#endif