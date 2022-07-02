/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:34:15 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/02 16:22:46 by dojannin         ###   ########.fr       */
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
int	ft_atoi(char const *s);
void	case_123(list **l);
void	case_132(list **l);
void	case_213(list *l);
void	case_231(list *l);
void	case_312(list **l);
void	case_321(list *l);
void	ft_case(list **l);
int		ft_lstsize(list *lst);
list	*malloc_cell(int data, int pos);
int 	nb_cell(list *l);
void	ft_lstadd_back(list **lst, list *new);
void	rra(list *l);
void	afficheList(list *l);
int		check_order(list *l);
int		return_data(list *l, int pos);
void	change_data(list **l, int pos, int new);

#endif