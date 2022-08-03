/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:49:14 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/25 15:43:01 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_rr(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	ft_printf("rrr\n");
	r_ra(stack_a, stack_b, imax_a, 0);
	r_rb(stack_a, stack_b, 0, imax_b);
}
