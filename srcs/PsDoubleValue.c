/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PsDoubleValue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:56 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:22:01 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	cheack_double_value(const char **args, int value, int index)
{
	if (index == 0)
		return ;
	while (index && args[--index])
	{
		if (ft_atoi(args[index]) == value)
			ps_error("Error");
	}
}
