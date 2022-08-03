/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_cmpt_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:22:51 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/11 15:51:44 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nbr_cmpt_lst(char *str)
{
	int	i;
	int	cmpt;

	cmpt = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
		i++;
		if (str[i] == '-')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			cmpt ++;
			while (str[i] >= '0' && str[i] <= '9' && str[i])
				i++;
		}
	}
	return (cmpt);
}
