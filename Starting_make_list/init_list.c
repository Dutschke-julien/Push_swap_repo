/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:21:17 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/04 14:42:29 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*init_list(int ac, char **argv)
{
	int	*i;

	if (ac == 2)
		i = malloc(sizeof(int) * nbr_cmpt_lst(argv[1]));
	else
		i = malloc(sizeof(int) * nbr_cmpt_lst_mutiple(argv));
	return (i);
}
