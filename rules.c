/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:54:48 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/06 22:50:10 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(list **l)
{
	list	*tmp;
	//list	*tmp2 = NULL;

	tmp = malloc_cell(ft_lstlast(*l)->data);
	ft_lstdeletelast(*l);
	ft_lstadd_front(l, tmp);
	write(1, "rra\n", 4);
}

void	sa(list **la)
{
	int		tmp;

	tmp = (*la)->data;
	(*la)->data = (*la)->next->data;
	(*la)->next->data = tmp;
	write(1, "sa\n", 3);
}

void	ra(list **l)
{	
	list *tmp;

	tmp = malloc_cell((*l)->data);
	ft_lstdeletefirst((l));
	ft_lstadd_back(l, tmp);
	write(1, "ra\n", 3);
	//free(tmp);
}

void	pa(list **la, list **lb)
{
	list	*tmp;

	tmp = malloc_cell((*lb)->data);
	ft_lstdeletefirst(lb);
	ft_lstadd_front(la, tmp);
	write(1, "pb\n", 3);
}

void	pb(list **lb, list **la)
{
	list	*tmp;

	tmp = malloc_cell((*la)->data);
	ft_lstdeletefirst(la);
	ft_lstadd_front(lb, tmp);
	write(1, "pb\n", 3);
}
