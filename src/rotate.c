/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:30:58 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/02 11:30:59 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(t_stt *stack, int both)
{
	t_list	*tmp;
	t_list	*last;

	tmp = stack->a;
	stack->a = stack->a->next;
	tmp->next = NULL;
	last = get_last_list(stack->a);
	last->next = tmp;
	if (both == 0)
		ft_printf("ra\n");
}

void	rb(t_stt *stack, int both)
{
	t_list	*tmp;
	t_list	*last;

	tmp = stack->b;
	stack->b = stack->b->next;
	tmp->next = NULL;
	last = get_last_list(stack->b);
	last->next = tmp;
	if (both == 0)
		ft_printf("rb\n");
}

void	rr(t_stt *stack)
{
	ra(stack, 1);
	rb(stack, 1);
	ft_printf("rr\n");
}
