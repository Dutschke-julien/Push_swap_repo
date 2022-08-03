/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finish.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:41:04 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/23 17:07:52 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_finish(int *stack_a, int *index_a, int *index_b)
{
	int	i;
	int	j;

	if (index_b[0] != -1)
		return (1);
	i = 0;
	j = 1;
	while (j != index_a[0] + 1)
	{
		if (stack_a[i] > stack_a[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}
