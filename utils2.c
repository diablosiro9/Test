/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:54:58 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/06 22:51:13 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	condi(list **la,list **lb)
{
	list	*tmp;
	list	*tmp2;

	tmp = (*la);
	tmp2 = (*lb);
	if (ft_lstsize(tmp) == 3)
	{
		ft_case_three(&tmp);
		//	printf("Dodo %d\n = ", tmp->data);
	}
	else if (ft_lstsize(tmp) == 5)
	{
		ft_case_five(&tmp, &tmp2);
	}/*
	else if (ft_lstzie(l) == 100)
	{
		do_hundred();
	}
	else if (ft_lstsize(l) == 500)
	{
	}
	*/
}

int	max_int(list *l)
{
	int	i;
	int	j;
	list	*tmp;

	i = 0;
	j = l->data;
	tmp = l;
	while (tmp)
	{
		i = tmp->data;
		if (i > j)
			j = i;
		i = 0;
		tmp = tmp->next;
	}
	//printf("%d", j);
	return (j);
}

int	min_int(list *l)
{
	int 	i;
	int		j;
	list	*tmp;

	i = 0;
	j = l->data;
	tmp = l;
	while (tmp)
	{
		i = tmp->data;
		if (i < j)
			j = i;
		tmp = tmp->next;
	}
	return (j);	
}

int	pos_max_cell(list *l)
{
	int		i;
	list	*tmp;

	i = 0;
	tmp = l;
	while (tmp)
	{
		//printf("test\n");
		if (tmp->data == max_int(tmp))
		{	
		//	printf("caca\n");
		//	return (i);
		//	printf("i = %d\n", i);
			return (i);
		}
		else
		{
			tmp = tmp->next;
			//printf("%d\n", i);
		}
		i++;
	}
//	printf("%d\n", i);
	return (i);
}

int	pos_min_cell(list *l)
{
	int		i;
	list	*tmp;

	i = 0;
	tmp = l;
	while (tmp)
	{
	//	printf("test\n");
		if (tmp->data == min_int(tmp))
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