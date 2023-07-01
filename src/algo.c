/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:39:24 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/19 14:39:27 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_radix(t_stt *stack)
{
	t_list	*num;
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = lst_length_a(stack);
	max_bits = 0;
	while ((len - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			num = stack->a;
			if (((num->index >> i) & 1) == 1)
				ra(stack, 0);
			else
				pb(stack);
		}
		while (stack->b)
			pa(stack);
	}
}

void	sort_three_args(t_list *f, t_list *s, t_list *t, t_stt *stack)
{
	if (f->nb < s->nb && f->nb < t->nb && s->nb > t->nb)
	{
		rra(stack, 0);
		sa(stack, 0);
	}
	else if (f->nb > s->nb && f->nb < t->nb && s->nb < t->nb)
		sa(stack, 0);
	else if (f->nb < s->nb && f->nb > t->nb && s->nb > t->nb)
		rra(stack, 0);
	else if (f->nb > s->nb && f->nb > t->nb && s->nb < t->nb)
		ra(stack, 0);
	else if (f->nb > s->nb && f->nb > t->nb && s->nb > t->nb)
	{
		ra(stack, 0);
		sa(stack, 0);
	}
}

void	three_args(t_stt *stack)
{
	t_list	*f;
	t_list	*s;
	t_list	*t;

	if (check_order(stack) != 0)
	{
		f = stack->a;
		s = f->next;
		t = s->next;
		sort_three_args(f, s, t, stack);
	}
}

void	pb_smallest(t_stt *stack)
{
	t_list	*a;
	int		min;

	min = find_min(stack);
	a = stack->a;
	(void)a;
	if (a->next->nb == min)
		ra(stack, 0);
	else if (a->next->next->nb == min)
	{
		ra(stack, 0);
		ra(stack, 0);
	}
	while (stack->a->nb != min)
		rra(stack, 0);
	pb(stack);
}

void	five_args(t_stt *stack)
{
	if (check_order(stack) != 0)
	{
		pb_smallest(stack);
		pb_smallest(stack);
		three_args(stack);
		pa(stack);
		pa(stack);
	}
}
