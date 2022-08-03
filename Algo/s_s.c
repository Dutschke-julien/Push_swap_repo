/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_s.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:26:21 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/12 11:14:14 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_s(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	s_a(stack_a, stack_b, imax_a, imax_b);
	s_b(stack_a, stack_b, imax_a, imax_b);
}
