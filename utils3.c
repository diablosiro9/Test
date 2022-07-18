/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:18:58 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/18 15:21:49 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_int(list *l)
{
	int	i;
	int	j;
	list	*tmp;

	i = 1;
	j = l->data;
	tmp = l;
	while (tmp)
	{
		i = tmp->data;
		if (i > j)
			j = i;
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

	i = 1;
//	if ((*l) == NULL) 
//		return (0);
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
		//printf("test\n");
		if (tmp->data == min_int(l))
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