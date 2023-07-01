/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:16:16 by ldaniel           #+#    #+#             */
/*   Updated: 2023/06/30 14:49:47 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

long long	ft_atol(const char *str)
{
	long long	res;
	long long	sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (*str != '\0')
		return (2147483648);
	return (res * sign);
}

t_list	*lst_new(long long nb)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->nb = nb;
	list->index = 0;
	list->next = NULL;
	return (list);
}

void	lst_add_back(t_list *head, t_list *new)
{
	t_list	*curr;
	t_list	*prec;

	curr = head;
	while (curr)
	{
		prec = curr;
		curr = curr->next;
	}
	prec->next = new;
}

t_list	*lst_init(int ac, int *nb)
{
	int		i;
	t_list	*ret;
	t_list	*test;

	i = 0;
	ret = lst_new(nb[i]);
	if (ac - 1 > 1)
	{
		while (++i < ac -1)
		{
			test = lst_new(nb[i]);
			lst_add_back(ret, test);
		}
	}
	return (ret);
}

t_list	*init_list_a(int ac, char **av)
{
	t_list		*lst;
	char		**split;
	long long	nb_split;
	long long	nb;
	int			i;

	i = 1;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		nb_split = 0;
		while (split[nb_split] != NULL)
		{
			nb = ft_atol(split[nb_split]);
			if (i == 1 && nb_split == 0)
				lst = lst_new(nb);
			else
				lst_add_back(lst, lst_new(nb));
			free(split[nb_split]);
			nb_split++;
		}
		i++;
		free(split);
	}
	return (lst);
}
