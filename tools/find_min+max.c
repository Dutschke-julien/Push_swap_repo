/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min+max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:00:41 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/31 06:15:27 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(int *tab, int *index)
{
	int	i;
	int	value;

	i = 0;
	value = tab[0];
	while (i != index[0] + 1)
	{
		if (value > tab[i])
			value = tab[i];
		i++;
	}
	return (value);
}

int	find_max(int *tab, int *index)
{
	int	i;
	int	value;

	i = 0;
	value = tab[0];
	while (i != index[0] + 1)
	{
		if (value < tab[i])
			value = tab[i];
		i++;
	}
	return (value);
}

int	find_minv2(int *tab, int *index, int last_low_value)
{
	int	i;
	int	value;

	i = 0;
	value = tab[0];
	while (i != 25)
	{
		if (value > tab[i])
			value = tab[i];
		i++;
	}
	return (value);
}
