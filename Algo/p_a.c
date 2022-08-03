/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:18:37 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/25 13:28:11 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	p_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	if (imax_b[0] < 0)
		return ;
	ft_printf("pa\n");
	if (imax_a[0] == -1)
	{
		stack_a[0] = stack_b[0];
		imax_a[0]++;
	}
	else if (imax_a[0] == 0)
	{
		stack_a[1] = stack_a[0];
		stack_a[0] = stack_b[0];
		imax_a[0]++;
	}
	else
	{
		ft_rotate(stack_a, imax_a);
		imax_a[0]++;
		stack_a[imax_a[0]] = stack_b[0];
		ft_rotate(stack_a, imax_a);
	}
	ft_uptade_push_list(stack_b, imax_b);
}
