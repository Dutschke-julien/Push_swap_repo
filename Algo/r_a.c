/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:35:01 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/28 03:01:20 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_a(int *stack_a, int *stack_b, int *imax_a, int indicator)
{
	int	*tmp;
	int	i;
	int	sauvegarde;

	if (indicator == 1)
		ft_printf("ra\n");
	sauvegarde = stack_a[0];
	i = 0;
	tmp = calloc(sizeof(int), imax_a[0] + 10);
	duplicate(tmp, stack_a, imax_a);
	while (i != imax_a[0])
	{
		stack_a[i] = tmp[i + 1];
		i++;
	}
	stack_a[imax_a[0]] = sauvegarde;
	free(tmp);
}
