/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:32:23 by aelsafi           #+#    #+#             */
/*   Updated: 2026/02/12 16:32:25 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	parse_stack(t_stack **a, char **argv)
{
	long	num;
	int		i;

	i = 1;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			return (0);
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		if (error_duplicate(*a, (int)num))
			return (0);
		stack_add_back(a, stack_new((int)num));
		i++;
	}
	return (1);
}

static int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	sort_stack(t_stack **a, t_stack **b)
{
	if (stack_size(*a) == 2)
		sa(a);
	else if (stack_size(*a) == 3)
		sort_three(a);
	else if (stack_size(*a) <= 5)
		sort_five(a, b);
	else
		radix_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	if (!parse_stack(&a, argv))
	{
		free_stack(&a);
		write(2, "Error\n", 6);
		return (1);
	}
	if (!is_sorted(a))
		sort_stack(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
