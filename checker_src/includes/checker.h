/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 03:14:26 by gapoulai          #+#    #+#             */
/*   Updated: 2021/03/30 14:56:55 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../libft/libft.h"

void	close_checker(int code);

void	parsing(t_checker *checker, int argc, char **argv);
void	parsing_check(int argc, char **argv);
void	print_stacks(t_checker *checker);
void	get_instru(t_checker *checker);
void	run_instru(t_checker *checker, char *instr);

#endif
