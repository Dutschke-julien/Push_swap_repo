/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:35:01 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/25 15:44:17 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_rb(int *stack_a, int *stack_b, int indicator, int *imax_b)
{
	int	*tmp;
	int	i;
	int	sauvegarde;

	if (indicator == 1)
		ft_printf("rrb\n");
	sauvegarde = stack_b[imax_b[0]];
	i = imax_b[0];
	tmp = calloc(sizeof(int), imax_b[0] + 10);
	duplicate(tmp, stack_b, imax_b);
	while (i != 0)
	{
		stack_b[i] = tmp[i - 1];
		i--;
	}
	stack_b[0] = sauvegarde;
	free(tmp);
}
