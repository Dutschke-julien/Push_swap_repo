/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:27:48 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/01 16:41:07 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int	*tableau;
	int	cmpt_index;
	int	*tableau2;

	if (ft_check_errors_start(argc, argv))
		return (1);
	tableau = init_list(argc, argv);
	tableau2 = init_list(argc, argv);
	if (make_int_tab(tableau, argv, argc))
		return (ft_printf("Nombres superieur / inferieur aux limitex du int\n"));
	cmpt_index = define_cmpt(argv, argc) - 1;
	if (verif_double(tableau, cmpt_index))
	{
		free(tableau2);
		return (1);
	}
	starting(tableau, tableau2, cmpt_index, -1);
	return (0);
}
