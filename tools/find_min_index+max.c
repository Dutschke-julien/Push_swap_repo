/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_index+max.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:02:18 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/27 19:07:04 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min_index(int *tab, int *index)
{
	int	i;
	int	value;
	int	j;

	i = 0;
	j = 0;
	value = tab[0];
	while (i != index[0] + 1)
	{
		if (value > tab[i])
		{
			value = tab[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	find_max_index(int *tab, int *index)
{
	int	i;
	int	value;
	int	j;

	j = 0;
	i = 0;
	value = tab[0];
	while (i != index[0] + 1)
	{
		if (value < tab[i])
		{
			value = tab[i];
			j = i;
		}
		i++;
	}
	return (j);
}
