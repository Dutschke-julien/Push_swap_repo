/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_cmpt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:25:48 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/04 14:42:32 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	define_cmpt(char **str, int ac)
{
	if (ac == 2)
		return (nbr_cmpt_lst(str[1]));
	else
		return (nbr_cmpt_lst_mutiple(str));
}
