/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:32:12 by aelsafi           #+#    #+#             */
/*   Updated: 2026/02/12 16:32:15 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	t_stack	*first;
	t_stack	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*first;
	t_stack	*second;

	if (a && *a && (*a)->next)
	{
		first = *a;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*a = second;
	}
	if (b && *b && (*b)->next)
	{
		first = *b;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*b = second;
	}
	write(1, "ss\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!b || !*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!a || !*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}
