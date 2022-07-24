/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:32:33 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/19 14:45:22 by dojannin         ###   ########.fr       */
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
	if (ac == 0 || ac == 1)
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
//	printf("Min int = %d\n", min_int(la));
	//printf("Max int = %d\n\n", max_int(la));
//	printf("Pos min = %d\n", pos_min_cell(la));
//	printf("Pos sec min = %d\n", pos_second_min(la));
//	printf("Second first min = %d\n", second_first_min(&la));
//	compare_two_first(&la, &lb);
	//printf("Pos max = %d\n\n", pos_max_cell(la));
	//printf("----> Apres condi\n");
	//afficheList(lb);
//	rra(&la);
//	rra(&la);
//	rra(&la);
//	rra(&la);
//	rra(&la);
//	pb(&lb, &la);
//	pb(&lb, &la);
//	pb(&lb, &la);
//	pb(&lb, &la);
//	push_min_five(&la, &lb);
//	push_min_four(&la, &lb);
//	ft_case_three(&la);
//	printf("Dist TOP orr Bottom = %d\n", dist_top_bottom(&la, pos_min_cell(la)));
	condi(&la, &lb);
	//printf("Pos min = %d\n", pos_min_cell(la));
	//printf("Pos max = %d\n", pos_max_cell(la));
	//pb(&lb, &la);
	//printf("Int max = %d\n", max_int(la));
	//afficheList(la);
	//rra(&la);
	//afficheList(lb);
	//afficheList(la);
	printf("La --> \n");
	afficheList(la);
	printf("LB --> \n");
	afficheList(lb);
	//system("leaks push_swap");
	//return (0);
}   