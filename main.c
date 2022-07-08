/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:32:33 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/06 22:52:07 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	list	*la;
	int		i;
	list	*tmp;
	list	*lb = NULL;

	i = 1;
	// la = malloc(sizeof(list));
	if (ac == 0)
		return (0);
	while (av[i])
	{
		tmp = malloc_cell(ft_atoi(av[i]));
		ft_lstadd_back(&la, tmp);
		// printf("LA->pos = %d\n", tmp->pos);
		// printf("LA->data = %d\n", tmp->data);
		i++;
	}
	//afficheList(la);
	printf("Min int = %d\n", min_int(la));
	printf("Max int = %d\n\n", max_int(la));
	printf("Pos min = %d\n", pos_min_cell(la));
	printf("Pos max = %d\n\n", pos_max_cell(la));
	printf("----> Apres condi\n");
	condi(&la, &lb);
	printf("Pos min = %d\n", pos_min_cell(la));
	printf("Pos max = %d\n", pos_max_cell(la));
	//pb(&lb, &la);
	//printf("Int max = %d\n", max_int(la));
	//afficheList(la);
	//rra(&la);
	afficheList(la);
	printf("LB --> ");
	afficheList(lb);
	//system("leaks push_swap");
	//return (0);
}