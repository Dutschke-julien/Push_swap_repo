/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:22:01 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/02 02:32:25 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	p_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	if (imax_a[0] < 0)
		return (0);
	ft_printf("pb\n");
	if (imax_b[0] == -1)
	{
		stack_b[0] = stack_a[0];
		imax_b[0]++;
	}
	else if (imax_b[0] == 0)
	{
		stack_b[1] = stack_b[0];
		stack_b[0] = stack_a[0];
		imax_b[0]++;
	}
	else
	{
		ft_rotate(stack_b, imax_b);
		imax_b[0]++;
		stack_b[imax_b[0]] = stack_a[0];
		ft_rotate(stack_b, imax_b);
	}
	ft_uptade_push_list(stack_a, imax_a);
	return (0);
}
