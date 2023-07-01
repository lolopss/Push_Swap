/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:41:59 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/02 10:42:03 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list	*ft_find_big(t_list *list)
{
	t_list	*biggest;

	biggest = list;
	while (list)
	{
		if (list->nb > biggest->nb)
			biggest = list;
		list = list->next;
	}
	return (biggest);
}

void	radix(t_stt *stack)
{
	ft_radix(stack);
	end_rotate(stack);
}

int	main(int ac, char **av)
{
	t_stt	*stack;

	stack = malloc(sizeof(t_stt));
	stack->a = NULL;
	stack->b = NULL;
	stack->a = init_list_a(ac, av);
	if (ac > 1 && check_args(stack) == 0)
	{
		ft_error(stack);
		ft_init_index(stack);
		if (lst_length_a(stack) == 2 && check_order(stack) != 0)
			ra(stack, 0);
		else if (lst_length_a(stack) == 3)
			three_args(stack);
		else if (lst_length_a(stack) == 5)
			five_args(stack);
		else if (check_order(stack) != 0)
			radix(stack);
		ft_free(stack);
		return (0);
	}
	if (stack->a)
		ft_free(stack);
	return (-1);
}
