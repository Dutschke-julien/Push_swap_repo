/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:15:42 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/31 01:53:46 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	compare_to_int(char *str)
{
	long long	n;
	int			negative;
	int			i;

	i = 0;
	if (ft_strlen(str) > 11)
		return (1);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	negative = 0;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negative = 1 - negative;
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - '0';
	if (negative)
		n *= -1;
	if (n >= INT_MAX || n <= INT_MIN)
		return (1);
	return (0);
}
