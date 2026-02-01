/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:27:44 by aelsafi           #+#    #+#             */
/*   Updated: 2026/01/30 16:27:54 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	add_number(char *str, t_stack **a)
{
	long	num;

	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	if (is_duplicate(*a, (int)num))
		return (0);
	stack_add_back(a, stack_new((int)num));
	return (1);
}

int	parse_args(int ac, char **av, t_stack **a)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] == ' ')
				j++;
			if (!av[i][j])
				break ;
			if (!add_number(&av[i][j], a))
				return (0);
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			while (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
		}
		i++;
	}
	return (1);
}
