/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DLL_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:13 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/20 16:56:12 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DLL.h"

int	dll_size(t_ps *head)
{
	t_ps	*temp;
	int	length;

	temp = head;
	length = 0;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}