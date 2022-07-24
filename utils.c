/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:47:07 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/20 22:40:31 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char const *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (s[i] == '\f' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == '\r' || s[i] == '\v' || s[i] == ' ')
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}

void	afficheList(list *l)
{
	list	*tmp = (l);

	if (!tmp)
		return ;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}

int	check_order(list *l)
{
		list	*tmp;

		tmp = l;
		while (tmp)
		{
			if ((tmp->data < tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return (123);
			if ((tmp->data > tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return (213);
			if ((tmp->data < tmp->next->data) && (tmp->next->data > tmp->next->next->data)
		&& (tmp->data > tmp->next->next->data))
			return (231);
			if ((tmp->data > tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data > tmp->next->next->data))
			return (312);
			if ((tmp->data > tmp->next->data) && (tmp->next->data > tmp->next->next->data)
		&& (tmp->data > tmp->next->next->data))
			return (321);
			if ((tmp->data < tmp->next->data) && (tmp->next->data > tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return (132);
		}
		return (0);
}

int 	return_data(list *l, int pos)
{
	list	*tmp;
	int	i;

	i = 0;
	if (!l || i > pos)
		return (0);
	tmp = l;
	while (tmp && i < pos)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->data);
}

void	change_data(list **l, int pos, int new)
{
	int	i;
	list	*tmp;

	i = 0;
	//tmp = malloc(sizeof(list) * nb_cell(l));
	tmp = *l;
	if (pos > ft_lstsize(*l))
		return ;
	while (i < pos && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->data = new;
}