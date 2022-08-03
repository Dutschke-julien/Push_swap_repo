/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:41:53 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/03 16:36:00 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	choose_algo(int *stack_a, int *stack_b, int *index_a, int *index_b)
{	
	if (!ft_finish(stack_a, index_a, index_b))
		return ;
	if (index_a[0] < 2 && ft_finish(stack_a, index_a, index_b))
		s_a(stack_a, stack_b, index_a, index_b);
	else if (index_a[0] == 2)
		algo_verysmall(stack_a, stack_b, index_a, index_b);
	else if (index_a[0] == 4)
		algo_medium(stack_a, stack_b, index_a, index_b);
	else if (index_a[0] == 99)
		algo_big(stack_a, stack_b, index_a, index_b);
	else if (index_a[0] == 499)
		algo_of_death(stack_a, stack_b, index_a, index_b);
	else
		algo_other(stack_a, stack_b, index_a, index_b);
}

void	algo_other(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	while (index_a[0] != -1)
		push_min_on_top(stack_a, stack_b, index_a, index_b);
	while (index_b[0] != -1)
		p_a(stack_a, stack_b, index_a, index_b);
	free(stack_a);
	free(stack_b);
}

void	algo_big(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	algo_big_pt1(stack_a, stack_b, index_a, index_b);
	algo_big_pt2(stack_a, stack_b, index_a, index_b);
	algo_big_pt3(stack_a, stack_b, index_a, index_b);
	algo_big_pt4(stack_a, stack_b, index_a, index_b);
	free(stack_a);
	free(stack_b);
}

void	push_him_top(int *stack_a, int local, int *cpy, int *index_a)
{
	int	index;
	int	value;

	value = stack_a[local];
	index = index_a[0] / 2;
	while (stack_a[0] != value)
	{
		if (local >= index)
			r_ra(stack_a, stack_a, index_a, 1);
		else
			r_a(stack_a, stack_a, index_a, 1);
	}
}

int	is_in_lst(int stack_0, int *stack_cpy)
{
	int	i;

	i = 0;
	while (i != 25)
	{
		if (stack_0 == stack_cpy[i])
			return (1);
		i++;
	}
	return (0);
}
