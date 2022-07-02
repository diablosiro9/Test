/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:32:33 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/02 16:34:45 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	list	*la;
	int		i;
	list	*tmp;

	i = 1;
	// la = malloc(sizeof(list));
	if (ac == 0)
		return (0);
	while (av[i])
	{
		tmp = malloc_cell(ft_atoi(av[i]), i - 1);
		ft_lstadd_back(&la, tmp);
		// printf("LA->pos = %d\n", tmp->pos);
		// printf("LA->data = %d\n", tmp->data);
		i++;
	}
	ft_case(&la);
	afficheList(la);
	return (0);
}