/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:53:56 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/02 16:33:03 by dojannin         ###   ########.fr       */
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

void	ft_case(list **l)
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