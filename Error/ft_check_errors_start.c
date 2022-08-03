/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors_start.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:59:59 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/04 14:42:52 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_errors_start(int ar, char **st)
{
	int	**stack;

	if (ar < 2)
		return (printf("Nombre d'argument insuffisant\n"));
	if (ar == 2)
		return (ft_check_arg1(st[1]));
	else
		return (ft_check_multiple_arg(st));
}
