/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:54:58 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/24 14:18:38 by dojannin         ###   ########.fr       */
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
	if (ft_lstsize(tmp) == 2)
		ft_case_two(&tmp);
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
	else if (ft_lstsize(tmp) == 100)
	{
		ft_case_hundred(la, lb);
	}
	/*else if (ft_lstsize(la) == 500)
	{
		
	}*/
}

int	dist_top_bottom(list **la, int min)
{
	list	*tmp;
	int		i;
	int		j;
	int		count;

	tmp = (*la);
	i = min;
	printf("Mehdiiiiiii = %d\n", i);
	j = 0;
	count = 0;
	//if (ft_lstsize(tmp) != 0)
	//{
		//if (i == 0)
	//	{
	//		printf("Case 0\n");
			//return (i); 
	//	}
	if (i <= (ft_lstsize(tmp) / 2))
	{
			//j = (ft_lstsize(tmp) / 2) - i;
		printf("Case 1 = %d\n", i);
		count = i;
		//	while (i)
		//	{
		//		ra(la);
		//		i--;
		//	}
	}
	else// (i >= (ft_lstsize(tmp) / 2))
	{
		j = (ft_lstsize(tmp) - 1) - i;
		printf("Case 2 = %d\n", j);
		count = j;
		//	while (j)
		//	{
		//		rra(la);
		///		j--;
		//	}
	}
	printf("LOL = %d\n", count);
	return (count + 1);
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

void	compare_two_first(list **la, list **lb)
{
	list	*tmp;
	list	*tmp2;
	int		range;
	int		i;
	int		j;
	int		k;
	int		l;

	tmp = (*la);
	tmp2 = (*lb);
	range = max_int(tmp) / 5;
	k = pos_min_cell(tmp);
	l = pos_second_min(tmp);
	i = dist_top_bottom(&tmp, k);// = 9
	j = dist_top_bottom(&tmp, l); //= 14
	printf("J arrivé = %d\n", j);
	if (k <= (ft_lstsize(tmp) / 2))
		k = 1;
	if (l <= (ft_lstsize(tmp) / 2))
		l = 1;
//	if (i == j)
//	{
//		while (i)
//		{
//			ra(la);
//			i--;
//		}
//	}
	//if (i == 0 || j == 0)
	//	pb(lb, la);
	if (i < j && k == 1 && l == 1)
	{
		printf("Compare two first I plus petit, debut deux \n");
		while (i > 1)
		{
			ra(la);
			i--;
		}
	}
	else if (j < i  && k == 1 && l == 1)
	{
		printf("J = %d  Compare two first J plus petit, debut deux \n", j);
		while (j > 1)
		{
			ra(la);
			j--;
		}
	}
	if (i < j && k == 1 && l != 1)
	{
		printf("Compare two first i plus petit, debut i fin j \n");
		while (i > 1)
		{
			ra(la);
			i--;
		}
	}
	else if (j < i && k == 1 && l != 1)
	{
		printf("Compare two first j plus petit, debut i fin j \n");
		while (j)
		{
			rra(la);
			j--;
		}
	}
	else if (i < j && k != 1 && l == 1)
	{
		printf("Compare two first i plus petit, fin i debut j \n");
		while (i)
		{
			rra(la);
			i--;
		}
	}
	else if (j < i && k != 1 && l == 1)
	{
		printf("Compare two first J plus petit, fin i debut j\n");
		while (j > 1)
		{
			ra(la);
			j--;
		}
	}
	else if (i < j && k != 1 && l != 1)
	{
		printf("Compare two first i plus petit, fin i fin j\n");
		while (i)
		{
			rra(la);
			i--;
		}
	}
	else if (j < i && k != 1 && l != 1)
	{
		printf("Compare two first J plus petit, fin i fin j\n");
		while (j)
		{
			rra(la);
			j--;
		}
	}
//	if ((*la) > ft_lstlast(*lb))
	//sort_range(la, lb);
	//if (check_sort(*lb) == 1)
	pb(lb, la);
	//else
	//	{
	///		while (check_sort(*lb) != 1)
		//		condi(lb, la);
		//}/
	//pb(lb, la);
}

int	check_sort(list *l)
{
	list	*tmp;

	tmp = (l);
	if (!tmp)
		return (0);
	while (tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
			return (-1);
		tmp = tmp->next;	
	}
	return (1);
}

int		less_range(list **l, int max, int min)
{
	list	*tmp;
	//int		count;

	tmp = *l;
	//count = ft_lstsize(tmp) / 5;
	while (tmp)
	{
		if (tmp->data <= max && tmp->data >= min)
			return (1);
		tmp = tmp->next;	
	}
	return (0);
}

int		less_range_2(list **l, int max)
{
	int		i;
	list	*tmp;

	tmp = *l;
	i = 0;
	while (tmp)
	{
		if (tmp->data < max)
			return (i);
		tmp = tmp->next;
		i++;	
	}
	return (0);
}

int		*create_tab(list **l, int max, int count)
{
	list	*tmp;
	int		*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = *l;
	tab = malloc(sizeof(int) * (ft_lstsize(*l) / 5));
	if (!tab)
		return (NULL);
	while (tmp && count)
	{
		if (tmp->data < max)
		{
			tab[i] = tmp->data;
			i++;
			count--;
		}
		tmp = tmp->next;
	}
	return (tab);
}
