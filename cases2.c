/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:53:56 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/06 22:53:48 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_321(list *l)
{
	int		i;
	int		j;
	list	*tmp;

	tmp = l;
	i = 0;
	j = 0;
	if (ft_lstsize(tmp) == 3 && (check_order(tmp) == 321))
	{
		i = return_data(tmp, 0);
		j = return_data(tmp, 2);
		change_data(&l, 0, j);
		change_data(&l, 2, i);
	}
}

void	ft_case_three(list **l)
{
	list	*tmp;

	tmp = *l;
	if (check_order(tmp) == 123)
		case_123(&tmp);
	if (check_order(tmp) == 132)
		case_132(&tmp);
	else if (check_order(tmp) == 213)
		case_213(tmp);
	else if (check_order(tmp) == 231)
		case_231(tmp);
	else if (check_order(tmp) == 312)
		case_312(&tmp);
	else if (check_order(tmp) == 321)
		case_321(tmp);
}

void	ft_case_five(list **la, list **lb)
{
	list	*tmp;
	list	*tmp2;

	tmp = *la;
	tmp2 = *lb;
	if (ft_lstsize(tmp) == 5)
	{
		push_highest_five(&tmp, &tmp2);
		//push_highest_five(&tmp, &tmp2);
		ft_case_three(&tmp);
	}
}

void	push_highest_five(list **la, list **lb)
{
	list	*tmp;
	list	*tmp2;
	int		i;
	int		j;
	int		pos;

	pos = 0;
	tmp = *la;
	tmp2 = *lb;
	i = max_int(*la);
	j = pos_max_cell(*la);
	if (ft_lstsize(tmp) == 5)
	{
		if (j == 1)
			pb(lb, la);
		if (j == 2)
		{
			sa(la);
			pb(lb, la);
		}
		if (j == 3)
		{
			ra(la);
			ra(la);
			pb(lb, la);
		}
		if (j == 4)
		{
			rra(la);
			rra(la);
			pb(lb, la);
		}
		if (j == 5)
		{
			rra(la);
			pb(lb, la);
		}
	}
}