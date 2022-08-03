/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_cmpt_lst_multiple.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:29:50 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/04 14:42:10 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nbr_cmpt_lst_mutiple(char **argv)
{
	int	cmpt;
	int	i;

	i = 1;
	cmpt = 0;
	while (argv[i])
	{
		i++;
		cmpt++;
	}
	return (cmpt);
}
