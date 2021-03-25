/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_instru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:44:23 by gapoulai          #+#    #+#             */
/*   Updated: 2021/03/25 12:44:47 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	get_instru(t_checker *checker)
{
	char	**line;
	int		ret;

	line = malloc(sizeof(char *));
	ret = 1;
	while (ret > 0)
	{
		ret = ft_get_next_line(0, line);
		if (ret == -1)
			close_checker(CLOSE_ERROR);
		run_instru(checker, *line);
		if (PRINT_STACKS)
			print_stacks(checker);
		free(*line);
	}
	free(line);
}
