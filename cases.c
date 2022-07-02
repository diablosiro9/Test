/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:51:26 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/02 16:24:46 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_123(list **l)
{
	list	*tmp;
	int		tp;

	tp = 0;
	tmp = *l;
	while (tmp)
	{
		if ((tmp->data < tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return ;
		tmp = tmp->next;
	}
}

void	case_132(list **l)
{
	int		i;
	int		j;
	list	*tmp;

	tmp = *l;
	i = 0;
	j = 0;
	if (tmp && ft_lstsize(tmp) == 3 && (check_order(tmp) == 132))
	{
		i = return_data(tmp, 1);
		j = return_data(tmp, 2);
		change_data(l, 1, j);
		change_data(l, 2, i);
	}
}

void	case_213(list *l)
{
	int		i;
	int		j;
	list	*tmp;

	tmp = l;
	i = 0;
	j = 0;
	if (ft_lstsize(tmp) == 3 && (check_order(tmp) == 213))
	{
		i = return_data(tmp, 0);
		j = return_data(tmp, 1);
		change_data(&l, 0, j);
		change_data(&l, 1, i);
	}
}

void	case_231(list *l)
{
	int		i;
	int		j;
	list	*tmp;

	tmp = l;
	i = 0;
	j = 0;
	if (ft_lstsize(tmp) == 3 && (check_order(tmp) == 231))
	{
		i = return_data(tmp, 0);
		j = return_data(tmp, 2);
		change_data(&l, 0, j);
		change_data(&l, 2, i);
		i = return_data(tmp, 1);
		j = return_data(tmp, 2);
		change_data(&l, 1, j);
		change_data(&l, 2, i);
	}
}

void	case_312(list **l)
{
	list	*tmp;
	int		i;
	int		j;

	tmp = *l;
	i = 0;
	j = 0;
	if (ft_lstsize(tmp) == 3 && (check_order(tmp) == 312))
	{
		i = return_data(tmp, 0);
		j = return_data(tmp, 1);
		change_data(l, 0, j);
		change_data(l, 1, i);
		i = return_data(tmp, 1);
		j = return_data(tmp, 2);
		change_data(l, 1, j);
		change_data(l, 2, i);
	}
}