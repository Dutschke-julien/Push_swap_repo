/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:55:49 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/24 17:51:56 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	tmp;

	if (imax_a[0] <= 0)
		return ;
	ft_printf("sa\n");
	tmp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = tmp;
}
