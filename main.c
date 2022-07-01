/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:32:33 by dojannin          #+#    #+#             */
/*   Updated: 2022/07/01 17:26:31 by dojannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(list *l);

int	ft_atoi(char const *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (s[i] == '\f' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == '\r' || s[i] == '\v' || s[i] == ' ')
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}

list	*malloc_cell(int data, int pos)
{
	list	*new;

	new = malloc(sizeof(list));
	//if (!new)
	//	return ;
	new->data = data;
	new->pos = pos;
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

/* Malloc un nouvel element, le connecter a la suite de la liste a la pos i
et link next a l'element suivant
Free l'ancien element a la meme position donne*/

int		return_data(list *l, int pos)
{
	int		i;
	list	*tmp;

	i = 0;
	tmp = l;
	if (pos > ft_lstsize(tmp))
		return (0);
	while (tmp && i < pos)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->data);
}

void	change_data(list **l, int pos, int new)
{
	int	i;
	list	*tmp;

	i = 0;
	//tmp = malloc(sizeof(list) * nb_cell(l));
	tmp = *l;
	if (pos > ft_lstsize(*l))
		return ;
	while (i < pos && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->data = new;
}

void	afficheList(list *l)
{
	list	*tmp = l;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
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

int	check_order(list *l)
{
		list	*tmp;

		tmp = l;
		while (tmp)
		{
			if ((tmp->data < tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return (123);
			if ((tmp->data > tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return (213);
			if ((tmp->data < tmp->next->data) && (tmp->next->data > tmp->next->next->data)
		&& (tmp->data > tmp->next->next->data))
			return (231);
			if ((tmp->data > tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data > tmp->next->next->data))
			return (312);
			if ((tmp->data > tmp->next->data) && (tmp->next->data > tmp->next->next->data)
		&& (tmp->data > tmp->next->next->data))
			return (321);
			if ((tmp->data < tmp->next->data) && (tmp->next->data > tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return (132);
		}
		return (0);
}

void	case_123(list **l)
{
	list	*tmp;
	int		tp;

	tp = 0;
	tmp = *l;
	while (tmp)
	{
		if ((tmp->data < tmp->next->data) && (tmp->next->data < tmp->next->next->data)
		&& (tmp->data < tmp->next->next->data))
			return ;
		tmp = tmp->next;
	}

}

void	case_213(list *l)
{
	int		i;
	int		j;
	list	*tmp;

	tmp = l;
	i = 0;
	j = 0;
	if (ft_lstsize(tmp) == 3 && (check_order(tmp) == 213))
	{
		i = return_data(tmp, 0);
		j = return_data(tmp, 1);
		change_data(&l, 0, j);
		change_data(&l, 1, i);
	}
}

void	case_231(list *l)
{
	int		i;
	int		j;
	list	*tmp;

	tmp = l;
	i = 0;
	j = 0;
	if (ft_lstsize(tmp) == 3 && (check_order(tmp) == 231))
	{
		i = return_data(tmp, 0);
		j = return_data(tmp, 2);
		change_data(&l, 0, j);
		change_data(&l, 2, i);
		i = return_data(tmp, 1);
		j = return_data(tmp, 2);
		change_data(&l, 1, j);
		change_data(&l, 2, i);
	}
}

void	case_312(list **l)
{
	list	*tmp;
	int		i;
	int		j;

	tmp = *l;
	i = 0;
	j = 0;
	if (ft_lstsize(tmp) == 3 && (check_order(tmp) == 312))
	{
		i = return_data(tmp, 0);
		j = return_data(tmp, 1);
		change_data(l, 0, j);
		change_data(l, 1, i);
		i = return_data(tmp, 1);
		j = return_data(tmp, 2);
		change_data(l, 1, j);
		change_data(l, 2, i);
	}
}

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

void	case_132(list **l)
{
	int		i;
	int		j;
	list	*tmp;

	tmp = *l;
	i = 0;
	j = 0;
	if (tmp && ft_lstsize(tmp) == 3 && (check_order(tmp) == 132))
	{
		i = return_data(tmp, 1);
		j = return_data(tmp, 2);
		change_data(l, 1, j);
		change_data(l, 2, i);
	}
}

void	rra(list *l)
{
	list	*tmp;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
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

void	ft_case(list **l)
{
	list	*tmp;

	tmp = *l;
	if (check_order(tmp) == 123)
			case_123(l);
	if (check_order(tmp) == 132)
		case_132(l);
	else if (check_order(tmp) == 213)
		case_213(tmp);
	else if (check_order(tmp) == 231)
		case_231(*l);
	else if (check_order(tmp) == 312)
		case_312(&tmp);
	else if (check_order(tmp) == 321)
		case_321(tmp);
}

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