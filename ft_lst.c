/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:49:00 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/04 16:59:10 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(list *lst)
{
	list *tmp;
	int i;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

list	*malloc_cell(int data)
{
	list	*new;

	new = malloc(sizeof(list));
	//if (!new)
	//	return ;
	new->data = data;
	//new->pos = pos;
	new->next = NULL;
	return (new);
}

int nb_cell(list *l)
{
	list	*tmp;
	int	i;

	i = 0;
	tmp = l;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_back(list **lst, list *new)
{
	list	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}

list	*ft_lstlast(list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}