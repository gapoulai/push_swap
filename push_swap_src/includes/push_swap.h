/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:31:59 by gapoulai          #+#    #+#             */
/*   Updated: 2021/04/01 10:11:31 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../libft/libft.h"

void	parsing(t_checker *checker, int argc, char **argv);
void	parsing_check(int argc, char **argv);
void	close_push_swap(int code);
void	do_move(t_checker *checker, char *move);

void	sort_int_tab(int *tab, int size);
int		get_min(t_stack stack);
int		get_max(t_stack stack);
int		get_closer(t_stack stack, int value);

bool	have_higher(t_stack stack, int min);
bool	have_lower(t_stack stack, int max);

void	sort_two(t_checker *checker);
void	sort_three(t_checker *checker);
void	sort_four_five(t_checker *checker);
void	sort_six_to_hundred(t_checker *checker);

#endif
