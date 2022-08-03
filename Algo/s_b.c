/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:23:27 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/14 14:14:50 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	tmp;

	if (imax_b[0] <= 0)
		return ;
	ft_printf("sb\n");
	tmp = stack_b[imax_b[0]];
	stack_b[imax_b[0]] = stack_b[imax_b[0] - 1];
	stack_b[imax_b[0] - 1] = tmp;
}
