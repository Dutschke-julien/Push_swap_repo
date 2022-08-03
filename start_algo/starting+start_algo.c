/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starting+start_algo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:37:06 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/28 13:09:24 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	starting(int *stack_a, int *stack_b, int index_a, int index_b)
{
	int	*i_a;
	int	*i_b;

	i_a = &index_a;
	i_b = &index_b;
	choose_algo(stack_a, stack_b, i_a, i_b);
}
