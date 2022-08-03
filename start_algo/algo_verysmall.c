/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_verysmall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:43:37 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/25 17:00:00 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//stack_a, stack_b, index_a, index_b

void	algo_verysmall(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] < stack_a[2])
		s_a(stack_a, stack_b, index_a, index_b);
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] > stack_a[2])
		r_a(stack_a, stack_b, index_a, 1);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] > stack_a[2])
	{
		s_a(stack_a, stack_b, index_a, index_b);
		r_ra(stack_a, stack_b, index_a, 1);
	}
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] < stack_a[2])
	{
		s_a(stack_a, stack_b, index_a, index_b);
		r_a(stack_a, stack_b, index_a, 1);
	}
	else
		r_ra(stack_a, stack_b, index_a, 1);
}
