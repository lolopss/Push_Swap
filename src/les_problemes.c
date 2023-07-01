/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   les_problemes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:29:44 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/19 11:29:45 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_rotate(t_stt *stack)
{
	if (check_order(stack) != 0)
	{
		ra(stack, 0);
	}
}

int	find_min(t_stt *stack)
{
	t_list	*a;
	int		min;

	a = stack->a;
	min = stack->a->nb;
	while (a != NULL)
	{
		if (a->nb < min)
			min = a->nb;
		a = a->next;
	}
	return (min);
}
