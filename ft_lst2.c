/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:50:43 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/04 19:21:56 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(list **lst, list *new)
{
	if (!*lst)
		*lst = new;
	else if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstdeletelast(list *lst)
{
	list	*del;
	list	*temp;

	temp = lst;
	if (temp && temp->next && !temp->next->next)
	{
		del = temp->next;
		free(del);
	}
	else
		while (temp->next->next != NULL)
			temp = temp->next;
	del = temp->next;
	free(del);
	temp->next = NULL;
}

void	ft_lstdeletefirst(list **lst)
{
	list	*tmp;

	tmp = NULL;
	if (lst == NULL || *lst == NULL)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	free(tmp);
	tmp = NULL;
}
