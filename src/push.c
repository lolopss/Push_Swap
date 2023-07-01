/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:30:44 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/02 11:30:46 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stt *stack)
{
	t_list	*tmp;

	if (stack->b == NULL)
		return ;
	tmp = stack->b;
	stack->b = tmp->next;
	tmp->next = stack->a;
	stack->a = tmp;
	ft_printf("pa\n");
}

void	pb(t_stt *stack)
{
	t_list	*tmp;

	if (stack->a == NULL)
		return ;
	tmp = stack->a;
	stack->a = tmp->next;
	tmp->next = stack->b;
	stack->b = tmp;
	ft_printf("pb\n");
}
