/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:40:38 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/06 14:40:40 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_stt *stack, int both)
{
	t_list	*before_last;
	t_list	*last;

	if (stack->a != NULL && stack->a->next != NULL)
	{
		last = get_last_list(stack->a);
		before_last = get_before_last(stack->a);
		last->next = stack->a;
		stack->a = last;
		before_last->next = NULL;
		if (both == 0)
			ft_printf("rra\n");
	}
}

void	rrb(t_stt *stack, int both)
{
	t_list	*before_last;
	t_list	*last;

	if (stack->b != NULL && stack->b->next != NULL)
	{
		last = get_last_list(stack->b);
		before_last = get_before_last(stack->b);
		last->next = stack->b;
		stack->b = last;
		before_last->next = NULL;
		if (both == 0)
			ft_printf("rra\n");
	}
}

void	rrr(t_stt *stack)
{
	rra(stack, 1);
	rrb(stack, 1);
	ft_printf("rrr\n");
}
