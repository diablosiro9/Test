/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:54:48 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/02 16:23:10 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(list *l)
{
	list	*tmp;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	tmp = NULL;
	i = return_data(tmp, 0);
	j = return_data(tmp, 2);
	change_data(&l, 0, j);
	change_data(&l, 2, i);
	i = return_data(tmp, 1);
	j = return_data(tmp, 2);
	change_data(&l, 1, j);
	change_data(&l, 2, i);
	write(1, "rra\n", 4);
}