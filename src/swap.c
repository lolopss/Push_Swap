/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:30:37 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/02 11:30:38 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa(t_stt *stack, int both)
{
	int	tmp;

	tmp = stack->a->nb;
	stack->a->nb = stack->a->next->nb;
	stack->a->next->nb = tmp;
	if (both == 0)
		ft_printf("sa\n");
}

void	sb(t_stt *stack, int both)
{
	int	tmp;

	tmp = stack->a->nb;
	stack->b->nb = stack->b->next->nb;
	stack->b->next->nb = tmp;
	if (both == 0)
		ft_printf("sb\n");
}

void	swap_both(t_stt *stack)
{
	sa(stack, 1);
	sb(stack, 1);
	ft_printf("ss\n");
}
