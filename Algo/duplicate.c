/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:20:25 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/28 13:07:55 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	duplicate(int *new, int *actual, int *index)
{
	int	i;

	i = index[0];
	while (i != -1)
	{
		new[i] = actual[i];
		i--;
	}
}
