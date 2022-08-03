/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_lst_into_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:35:54 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/11 15:29:50 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	convert_lst_into_tab(char **lst, int *tab)
{
	int	i;

	i = 0;
	while (lst[i + 1])
	{
		if (compare_to_int(lst[i + 1]))
			return (1);
		tab[i] = ft_atoi(lst[i + 1]);
		i++;
	}
	return (0);
}
