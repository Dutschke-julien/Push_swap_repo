/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_op_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:42:45 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/15 13:42:57 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_nbr_op_index(int *stack_a, int *index_a)
{
	int	i;
	int	cmpt;
	int	index_cmpt;

	if (index_a[0] == -1)
		return (-1);
	i = 0;
	cmpt = stack_a[0];
	index_cmpt = 0;
	while (i != index_a[0] + 1)
	{
		if (cmpt < stack_a[i])
		{
			index_cmpt = i;
			cmpt = stack_a[i];
		}
		i++;
	}
	return (index_cmpt);
}
