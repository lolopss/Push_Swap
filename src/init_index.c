/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:50:06 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/22 10:50:07 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(int *index, int *len, t_list **a, t_stt **stack)
{
	*len = lst_length_a((*stack));
	*index = 1;
	*a = (*stack)->a;
}

void	while_init(t_list **a, t_stt **stack, int *temp_nb, t_list **sm_elem)
{
	while ((*a)->index != 0)
	{
		*a = (*a)->next;
		if (!(*a))
			*a = (*stack)->a;
	}
	*temp_nb = (*a)->nb;
	*sm_elem = (*a);
}

void	while_init2(t_list **a, t_stt **stack, int *temp_nb, t_list **sm_elem)
{
	if ((*temp_nb) > (*a)->nb && (*a)->index == 0)
	{
		*sm_elem = (*a);
		*temp_nb = (*a)->nb;
	}
	*a = (*a)->next;
	if (!(*a))
		(*a) = (*stack)->a;
}

void	ft_init_index(t_stt *stack)
{
	t_list	*list_a;
	t_list	*smallest_elem;
	int		temp_nb;
	int		index;
	int		len ;

	init(&index, &len, &list_a, &stack);
	while (index <= len)
	{
		while_init(&list_a, &stack, &temp_nb, &smallest_elem);
		list_a = list_a->next;
		if (!list_a)
			list_a = stack->a;
		while (temp_nb != list_a->nb)
			while_init2(&list_a, &stack, &temp_nb, &smallest_elem);
		smallest_elem->index = index;
		index++;
	}
}
