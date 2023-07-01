/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:03:05 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/30 14:48:04 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_list
{
	long long		nb;
	int				index;
	struct s_list	*next;
}			t_list;

typedef struct s_stt
{
	t_list	*a;
	t_list	*b;
}			t_stt;

t_list		*init_list_a(int ac, char **av);
t_list		*get_before_last(t_list *list);
t_list		*get_last_list(t_list *list);
t_list		*get_last_a(t_stt *stack);
int			find_min(t_stt *stack);
void		three_args(t_stt *stack);
void		five_args(t_stt *stack);
void		ft_radix(t_stt *stack);
void		lst_print(t_stt *stack);
void		sa(t_stt *stack, int both);
void		sb(t_stt *list, int both);
void		ra(t_stt *stack, int both);
void		rb(t_stt *stack, int both);
void		rra(t_stt *stack, int both);
void		rrb(t_stt *stack, int both);
void		ss(t_stt *list);
void		rr(t_stt *stack);
void		rrr(t_stt *stack);
void		pa(t_stt *stack);
void		pb(t_stt *stack);
void		ft_error(t_stt *stack);
void		ft_free(t_stt *stack);
void		end_rotate(t_stt *stack);
void		ft_init_index(t_stt *stack);
int			check_args2(t_stt *stack);
int			check_order(t_stt *stack);
int			check_args(t_stt *stack);
int			lst_length_a(t_stt *stack);
long long	ft_atol(const char *str);

#endif
