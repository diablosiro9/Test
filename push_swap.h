/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:34:15 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/18 15:47:46 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct list
{
	int				data;
	struct list		*next;
	int 			pos;
}list;

struct list		*tete;
int		ft_atoi(char const *s);
void	case_123(list **l);
void	case_132(list **l);
void	case_213(list *l);
void	case_231(list *l);
void	case_312(list **l);
void	case_321(list *l);
void	ft_case_three(list **l);
int		ft_lstsize(list *lst);
list	*malloc_cell(int data);
int 	nb_cell(list *l);
void	ft_lstadd_back(list **lst, list *new);
void	rra(list **l);
void	afficheList(list *l);
int		check_order(list *l);
int		return_data(list *l, int pos);
void	change_data(list **l, int pos, int new);
list	*ft_lstlast(list *lst);
list	**ft_lstadd_front(list **lst, list *new);
void	ft_lstdeletefirst(list **lst);
void	ft_lstdeletelast(list *lst);
void	condi(list **la, list **lb);
int		pos_max_cell(list *l);
int		pos_min_cell(list *l);
int		max_int(list *l);
int		min_int(list *l);
void	pa(list **la, list **lb);
void	pb(list **lb, list **la);
void	ft_case_five(list **la, list **lb);
void	push_highest_five(list **la, list **lb);
list	*push_min_five(list **la, list **lb);
void	push_min_four(list **la, list **lb);
void	sa(list **la);
void	ra(list **l);
int		dist_top_bottom(list **la, int min);
int	second_first_min(list **la);
int		pos_second_min(list *l);
void	compare_two_first(list **la);
void	ft_case_hundred(list **la, list **lb);

#endif