/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_of_death.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:03:52 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/02 04:00:55 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_of_death(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	algo_of_death1(stack_a, stack_b, index_a, index_b);
	algo_of_death2(stack_a, stack_b, index_a, index_b);
	algo_of_death3(stack_a, stack_b, index_a, index_b);
	algo_of_death4(stack_a, stack_b, index_a, index_b);
	algo_of_death5(stack_a, stack_b, index_a, index_b);
	algo_of_death6(stack_a, stack_b, index_a, index_b);
	algo_of_death7(stack_a, stack_b, index_a, index_b);
	algo_of_death8(stack_a, stack_b, index_a, index_b);
	algo_of_death9(stack_a, stack_b, index_a, index_b);
	algo_of_death10(stack_a, stack_b, index_a, index_b);
	free(stack_a);
	free(stack_b);
}

void	algo_of_death1(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 449)
	{
		if (is_in_lst2(stack_a[0], cpy))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_of_death2(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 449)
	{
		if (is_in_lst2(stack_a[0], cpy + 50))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 50))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[49]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_of_death3(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 449)
	{
		if (is_in_lst2(stack_a[0], cpy + 100))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 100))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[99]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_of_death4(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 449)
	{
		if (is_in_lst2(stack_a[0], cpy + 150))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 150))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[149]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}
