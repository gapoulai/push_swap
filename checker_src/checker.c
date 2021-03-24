/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 03:02:14 by gapoulai          #+#    #+#             */
/*   Updated: 2021/03/24 10:57:31 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

int	main(int argc, char **argv)
{
	t_checker	checker;

	parsing(&checker, argc, argv);
	if (PRINT_STACKS)
		print_stacks(&checker);
	get_instru(&checker);
	print_instru(&checker);
	close_checker(CLOSE_OK);
}
