/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:31:41 by gapoulai          #+#    #+#             */
/*   Updated: 2021/04/02 11:14:22 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# define 	PRINT_STACKS	0

# define CLOSE_OK		0
# define CLOSE_KO		1
# define CLOSE_ERROR	2
# define CLOSE_NOPRINT	3

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_stack
{
	int				*stack;
	ssize_t			size;
}				t_stack;

typedef struct s_count
{
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}			t_count;

typedef struct s_checker
{
	t_stack			stack_a;
	t_stack			stack_b;
	t_list			*moves;
	t_count			count;
}				t_checker;

int			ft_atoi(const char *str);
bool		ft_isalpha(char c);
bool		ft_isdigit(char c);
bool		ft_isalnum(char c);
bool		ft_isascii(char c);
bool		ft_isprint(char c);
bool		ft_isspace(char c);
bool		ft_ischarset(char c, char *charset);
bool		ft_isinrange(long long value, long long min, long long max);
size_t		ft_strlen(char *s);
void		ft_print_err(char *msg);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstadd_front(t_list **alst, t_list *new);
t_list		*ft_lstnew(void *content);
int			ft_get_next_line(int fd, char **line);
char		*ft_strdup(char *s1);
bool		ft_strcmp(const char *s1, const char *s2);
void		ft_putstr_fd(int fd, char *str);
void		ft_putendl_fd(int fd, char *str);
void		close_program(int code);
bool		check_int_overflow(char *str);

void		ft_swap(int *a, int *b);

bool		swap_sa(t_checker *checker);
bool		swap_sb(t_checker *checker);
bool		swap_ss(t_checker *checker);

void		ft_push(t_stack *dst, t_stack *src);

bool		push_pa(t_checker *checker);
bool		push_pb(t_checker *checker);

void		rot1(t_stack *stack);

bool		rotate_ra(t_checker *checker);
bool		rotate_rb(t_checker *checker);
bool		rotate_rr(t_checker *checker);

void		rotn1(t_stack *stack);

bool		rotate_rra(t_checker *checker);
bool		rotate_rrb(t_checker *checker);
bool		rotate_rrr(t_checker *checker);

void		print_stacks(t_checker *checker);
bool		is_sorted(t_stack stack);

#endif
