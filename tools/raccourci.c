/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raccourci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:25:41 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/01 02:17:43 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_max_on_top(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	while (find_max_index(stack_a, index_a) != 0)
	{
		if (find_max_index(stack_a, index_a) <= index_a[0] / 2)
			r_a(stack_a, stack_b, index_a, 1);
		else
			r_ra(stack_a, stack_b, index_a, 1);
	}
	p_b(stack_a, stack_b, index_a, index_b);
}

void	push_max_on_top2(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	while (find_max_index(stack_b, index_b) != 0)
	{
		if (find_max_index(stack_b, index_b) <= index_b[0] / 2)
			r_b(stack_a, stack_b, 1, index_b);
		else
			r_rb(stack_a, stack_b, 1, index_b);
	}
	p_a(stack_a, stack_b, index_a, index_b);
}

void	push_min_on_top(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	while (find_min_index(stack_a, index_a) != 0)
	{
		if (find_min_index(stack_a, index_a) <= index_a[0] / 2)
			r_a(stack_a, stack_b, index_a, 1);
		else
			r_ra(stack_a, stack_b, index_a, 1);
	}
	p_b(stack_a, stack_b, index_a, index_b);
}
