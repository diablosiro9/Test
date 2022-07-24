/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:53:56 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/23 21:45:27 by dojannin         ###   ########.fr       */
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

void	ft_case_hundred(list **la, list **lb)
{
	list	*tmp;
	list	*tmp2;
	int		max;
	int		first_range;
	int		second_range;

	tmp = (*la);
	tmp2 = (*lb);
	max = max_int(*la);
	first_range = (max / 5) * 3;
	second_range = (max / 5) * 2;
	printf("FIRST RANGE = %d, Sec = %d\n", second_range, first_range);
	while (ft_lstsize(*lb) < 5 && less_range(la, first_range, 0) == 1)
	{
	//	printf("RES LESS_R = %d\n", less_range(la, second_range, first_range));
	//if (less_range(la, second_range, first_range) == 1)
		sort_range(la, lb);
		//if (ft_lstsize(*lb) == 3 || ft_lstsize(*lb) == 5)
		//	condi(lb, la);
	}
//	ft_case_two(lb);
//	compare_two_first(la, lb);
//	ft_case_three(lb);
///	compare_two_first(la, lb);
	//compare_two_first(la, lb);
	//ft_case_five(lb, &tmp);
//	compare_two_first(la, lb);
//	compare_two_first(la, lb);
//	rb(lb);
}

void	sort_range(list **la, list **lb)
{
	list	*tmp;
	list	*tmp2;

	tmp = *la;
	tmp2 = *lb;
	while (ft_lstsize(*lb) < 20)
	{
		compare_two_first(la, lb);
		if (ft_lstsize(*lb) == 2)
			ft_case_two(lb);
		if (ft_lstsize(*lb) == 3)
			condi(lb, la);
		if (ft_lstsize(*lb) == 5)
			ft_case_five(lb, la);
	}
}

void	ft_case_two(list **l)
{
	list	*tmp;
	int		i;

	tmp = (*l);
	i = tmp->data;
	if (tmp->data > tmp->next->data)
	{
		i = tmp->data;
		tmp->data = tmp->next->data;
		tmp->next->data = i;
	}
}