/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str_into_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:32:37 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/11 14:42:58 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	convert_str_into_tab(char *str, int *lst)
{
	char	**tableau;
	int		i;

	i = 0;
	tableau = ft_split(str, ' ');
	while (tableau[i])
	{
		if (compare_to_int(tableau[i]))
			return (1);
		lst[i] = ft_atoi(tableau[i]);
		i++;
	}
	return (0);
}
