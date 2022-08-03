/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:01:00 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/31 01:56:09 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_arg1(char *str)
{
	int	i;
	int	space;

	space = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] != '-' && str[i] != ' ')
			{
				ft_printf("voici le caractere '%c' \n", str[i]);
				ft_printf(" l'erreur commence ici -> %s\n", &str[i]);
				return (ft_printf("Erreur caracteres argument\n"));
			}
		}
		if (str[i] >= '0' && str[i] <= '9')
			space = 0;
		i++;
	}
	if (space)
		return (ft_printf("Que des espaces dans la chaine || chaine vide"));
	return (ft_check_arg1v2(str));
}
