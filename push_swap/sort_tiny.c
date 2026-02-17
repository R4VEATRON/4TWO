/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:33:04 by aelsafi           #+#    #+#             */
/*   Updated: 2026/02/12 16:33:07 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_highest(t_stack *a)
{
	int		highest;

	if (!a)
		return (0);
	highest = a->value;
	while (a)
	{
		if (a->value > highest)
			highest = a->value;
		a = a->next;
	}
	return (highest);
}

static int	find_smallest(t_stack *a)
{
	int	smallest;

	smallest = a->value;
	while (a)
	{
		if (a->value < smallest)
			smallest = a->value;
		a = a->next;
	}
	return (smallest);
}

void	sort_three(t_stack **a)
{
	int		highest;

	if (!*a || !(*a)->next || !(*a)->next->next)
		return ;
	highest = find_highest(*a);
	if ((*a)->value == highest)
		ra(a);
	else if ((*a)->next->value == highest)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	smallest;

	while (stack_size(*a) > 3)
	{
		smallest = find_smallest(*a);
		while ((*a)->value != smallest)
			ra(a);
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
