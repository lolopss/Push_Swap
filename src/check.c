/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:26:27 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/16 13:26:28 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	check_order(t_stt *stack)
{
	t_list	*list_a;

	list_a = stack->a;
	while (list_a && list_a->next != NULL)
	{
		if (list_a->nb > list_a->next->nb)
			return (1);
		list_a = list_a->next;
	}
	return (0);
}

int	ft_is_double(t_stt *stack)
{
	t_list	*elem;
	t_list	*tmp;

	elem = stack->a;
	if (elem)
	{
		while (elem->next)
		{
			tmp = elem->next;
			while (tmp)
			{
				if (elem->nb == tmp->nb)
					return (-1);
				tmp = tmp->next;
			}
			elem = elem->next;
		}
	}
	return (0);
}

int	check_args2(t_stt *stack)
{
	t_list	*lst_a;

	lst_a = stack->a;
	while (stack->a)
	{
		if ((lst_a->nb >= 0 && lst_a->nb <= 9))
			lst_a = lst_a->next;
		else
			return (-1);
	}
	return (0);
}

int	check_args(t_stt *stack)
{
	t_list	*lst_a;

	lst_a = stack->a;
	while (lst_a)
	{
		if (lst_a->nb < -2147483648 || lst_a->nb > 2147483647)
		{
			write(2, "Error\n", 7);
			return (1);
		}
		else
			lst_a = lst_a->next;
	}
	return (0);
}

void	ft_error(t_stt *stack)
{
	int	duo;

	duo = ft_is_double(stack);
	if (duo == -1)
	{
		ft_free(stack);
		write(2, "Error\n", 7);
		exit(EXIT_FAILURE);
	}
}
