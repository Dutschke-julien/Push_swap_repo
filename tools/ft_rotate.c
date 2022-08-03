/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:25:44 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/28 13:11:13 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(int *tab, int *index)
{
	int	i;
	int	j;
	int	save;

	j = index[0];
	i = 0;
	if (j == -1)
		return ;
	while (i < j)
	{
		save = tab[i];
		tab[i] = tab[j];
		tab[j] = save;
		j--;
		i++;
	}
}

void	ft_uptade_push_list(int *tab, int *index)
{
	int	*cpy;
	int	i;
	int	j;

	cpy = ft_calloc(sizeof(int), index[0] + 10);
	duplicate(cpy, tab, index);
	i = 0;
	j = 1;
	while (i != index[0] && index[0] != -1)
	{
		tab[i] = cpy[j];
		i++;
		j++;
	}
	free(cpy);
	index[0]--;
}
