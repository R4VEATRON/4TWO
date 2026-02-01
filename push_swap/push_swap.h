/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:26:34 by aelsafi           #+#    #+#             */
/*   Updated: 2026/01/30 16:26:55 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

int					parse_args(int ac, char **av, t_stack **a);

t_stack				*stack_new(int value);
void				stack_add_back(t_stack **stack, t_stack *new);
int					stack_size(t_stack *stack);
int					is_sorted(t_stack *stack);
void				free_stack(t_stack **stack);

long				ft_atol(const char *str);
int					is_duplicate(t_stack *a, int value);

void				error_exit(t_stack **a);

#endif
