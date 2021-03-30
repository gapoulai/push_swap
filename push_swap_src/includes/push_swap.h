/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:31:59 by gapoulai          #+#    #+#             */
/*   Updated: 2021/03/30 15:23:10 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../libft/libft.h"

void	parsing(t_checker *checker, int argc, char **argv);
void	parsing_check(int argc, char **argv);
void	close_push_swap(int code);
void	do_move(t_checker *checker, char *move);

void	sort_two(t_checker *checker);

#endif
