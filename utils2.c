/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:54:58 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/18 15:39:03 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	condi(list **la,list **lb)
{
	list	*tmp;
	list	*tmp2;

	tmp = (*la);
	if (!tmp)
		return ;
	tmp2 = (*lb);
	if (ft_lstsize(tmp) == 0)
		return ;
	if (ft_lstsize(tmp) == 3)
	{
		printf("CONDI : case three\n");
		ft_case_three(&tmp);
		//	printf("Dodo %d\n = ", tmp->data);
	}
	if (ft_lstsize(tmp) == 5)
	{
		printf("CONDI : case five\n");
		ft_case_five(la, lb);
	//	push_min_four(&tmp, &tmp2);
	}/*
	else if (ft_lstsize(tmp) == 4)
	{
		push_min_four(la, lb);
	}*/
	else if (ft_lstzie(tmp) == 100)
	{
		ft_case_hundred(la, lb);
	}
	else if (ft_lstsize(la) == 500)
	{
	}
	*/
}

int	dist_top_bottom(list **la, int min)
{
	list	*tmp;
	int		i;
	int		j;

	tmp = *la;
	i = min;
	j = 0;
	if (ft_lstsize(tmp) != 0)
	{
		j = i;
		if (i == 0)
		{
			printf("Case 0\n");
			//return (i); 
		}
		if (i < (ft_lstsize(tmp) / 2))
		{
			//j = (ft_lstsize(tmp) / 2) - i;
			printf("Case 1 = %d\n", j);
			while (i)
			{
				ra(la);
				i--;
			}
		}
		else if (i >= (ft_lstsize(tmp) / 2))
		{
			j = (ft_lstsize(tmp) - 1) - i;
			printf("Case 2 = %d\n", j);
			while (i)
			{
				rra(la);
				i--;
			}
		}
	}
	return (j);
}

int	second_first_min(list **la)
{
	int 	i;
	int		j;
	int		k;
	list	*tmp;

	i = min_int(*la);
//	if ((*l) == NULL) 
//		return (0);
	j = 0;
	tmp = (*la);
	k = tmp->data;
//	printf("Mehdi = %d\n", tmp->data);
	while (tmp)
	{
		j = tmp->data;
		if (j > i && j < k)
			k = j;
		tmp = tmp->next;
	}
	return (k);	
}

int	pos_second_min(list *l)
{
	int		i;
	list	*tmp;

	i = 0;
	tmp = l;
	while (tmp)
	{
		//printf("test\n");
		if (tmp->data == second_first_min(&l))
		{	
		//	printf("caca\n");
		//	return (i);
		//	printf("i = %d\n", i);
			return (i);
		}
		else
		{
			tmp = tmp->next;
		//	printf("%d\n", i);
		}
		i++;
	}
//	printf("Pos min cell = %d", i);
	return (i);
}

void	compare_two_first(list **la)
{
	list	*tmp;
	int		i;
	int		j;

	tmp = (*la);
	i = dist_top_bottom(&tmp, min_int(tmp));
	j = dist_top_bottom(&tmp, second_first_min(&tmp));
}