/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:07:34 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/06 16:07:34 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list	*get_last_list(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

t_list	*get_before_last(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
