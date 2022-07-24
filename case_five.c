/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:09:54 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/19 10:11:28 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_five(list **la, list **lb)
{
//	list	*temp;
	list	*tmp;
	list	*tmp2;

	tmp = *la;
	tmp2 = *lb;
	if (ft_lstsize(tmp) == 5)
	{
	//	printf("CASE_FIVE : push_min_five x2 && case_three\n");
		push_min_five(la, lb);
	//	push_min_five(&, &lb);
	//if (ft_lstsize(tmp) == 4)
	//	push_min_four(&tmp, &tmp2);
	//	ft_case_three(&tmp);
	//	ft_case_three(&tmp);
	}
//	temp = tmp;
	push_min_four(la, lb);
	ft_case_three(la);
	pa(la, lb);
	pa(la, lb);
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
		if (j == 0)
			pb(lb, la);
		if (j == 1)
		{
			sa(la);
			pb(lb, la);
		}
		if (j == 2)
		{
			ra(la);
			ra(la);
			pb(lb, la);
		}
		if (j == 3)
		{
			rra(la);
			rra(la);
			pb(lb, la);
		}
		if (j == 4)
		{
			rra(la);
			pb(lb, la);
		}
	}
}

list	*push_min_five(list **la, list **lb)
{
	list	*tmp;
	list	*tmp2;
	int		i;
	int		j;
//	int		pos;

//	pos = 0;
	tmp = (*la);
	tmp2 = (*lb);
	i = min_int(*la);
	j = pos_min_cell(*la);
	if (ft_lstsize(tmp) == 5)
	{
		if (j == 0)
		{
			printf("Min zero\n");
			//pb(lb, &tmp);
		}
		else if (j == 1)
		{
			printf("Min first\n");
			sa(&tmp);
		}
		else if (j == 2)
		{
			printf("Min sec\n");
			ra((la));
			ra(la);
		}
		else if (j == 3)
		{
			printf("Min third\n");
			rra(la);
			rra(la);
		}
		else if (j == 4)
		{
			printf("Min last\n");
			rra(la);
		}
		pb(lb, (&*la));
	}
	return (*lb);
}

void	push_min_four(list **la, list **lb)
{
	list	*tmp;
	list	*tmp2;
	int		i;
	int		j;

	tmp = *la;
	tmp2 = *lb;
	i = min_int(*la);
	j = pos_min_cell(*la);
	if (ft_lstsize(tmp) == 4)
	{
		if (j == 0)
			pb(lb, la);
		else if (j == 1)
		{
			sa(la);
			pb(lb, la);
		}
		else if (j == 2)
		{
			rra(la);
			rra(la);
			pb(lb, la);
		}
		else if (j == 3)
		{
			rra(la);
			pb(lb, la);
		}
	}
}
