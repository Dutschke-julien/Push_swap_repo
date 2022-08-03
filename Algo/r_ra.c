/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_ra.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:26:04 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/25 15:44:23 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_ra(int *stack_a, int *stack_b, int *imax_a, int indicator)
{
	int	*tmp;
	int	i;
	int	sauvegarde;

	if (indicator == 1)
		ft_printf("rra\n");
	sauvegarde = stack_a[imax_a[0]];
	i = imax_a[0];
	tmp = calloc(sizeof(int), imax_a[0] + 10);
	duplicate(tmp, stack_a, imax_a);
	while (i != 0)
	{
		stack_a[i] = tmp[i - 1];
		i--;
	}
	stack_a[0] = sauvegarde;
	free(tmp);
}
