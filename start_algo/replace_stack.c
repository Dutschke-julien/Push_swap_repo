/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 05:31:43 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/01 05:39:49 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	replace_stack(int *stack_a, int *stack_b, int *index_a, int nbr)
{
	int	i;

	i = 0;
	while (stack_a[i] != nbr)
		i++;
	if (i <= index_a[0])
	{
		while (stack_a[0] != nbr)
			r_a(stack_a, stack_b, index_a, 1);
	}
	else
	{
		while (stack_a[0] != nbr)
			r_ra(stack_a, stack_b, index_a, 1);
	}
}
