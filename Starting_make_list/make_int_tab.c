/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:31:36 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/11 14:41:23 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	make_int_tab(int *tab, char **argv, int argc)
{
	if (argc == 2)
	{
		if (convert_str_into_tab(argv[1], tab))
			return (1);
	}
	else if (argc > 2)
	{
		if (convert_lst_into_tab(argv, tab))
			return (1);
	}
	return (0);
}
