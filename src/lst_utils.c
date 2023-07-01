/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:57:20 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/06 17:57:21 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_print(t_stt *stack)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = stack->a;
	tmp_b = stack->b;
	while (tmp_a)
	{
		ft_printf("%d | %d\n", tmp_a->nb, tmp_a->index);
		tmp_a = tmp_a->next;
	}
	ft_printf("\n");
	while (tmp_b)
	{
		ft_printf("%d\n", tmp_b->index);
		tmp_b = tmp_b->next;
	}
}

int	lst_length_a(t_stt *stack)
{
	int		i;
	t_list	*a;

	a = stack->a;
	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	ft_free(t_stt *stack)
{
	t_list	*tmp;

	while (stack->a)
	{
		tmp = stack->a;
		stack->a = stack->a->next;
		free(tmp);
	}
	while (stack->b)
	{
		tmp = stack->b;
		stack->b = stack->b->next;
		free(tmp);
	}
	free(stack);
}

t_list	*get_last_a(t_stt *stack)
{
	t_list	*list_a;

	list_a = stack->a;
	while (list_a->next != NULL)
		list_a = list_a->next;
	return (list_a);
}
