/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:37:29 by aelsafi           #+#    #+#             */
/*   Updated: 2025/07/16 19:37:37 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_solution(int *chessboard)
{
	int	i;

	i = 0;
	while (i < 10)
		ft_putchar(chessboard[i++] + '0');
	ft_putchar('\n');
}

int	attack_possibility(int *chessboard, int p)
{
	int	i;

	i = 0;
	while (i < p)
	{
		if (chessboard[i] == chessboard[p] && i != p)
			return (1);
		if (i != p)
		{
			if (chessboard[i] == chessboard[p] - (p - i)
				|| chessboard[i] == chessboard[p] + (p - i))
				return (1);
		}
		i++;
	}
	return (0);
}

void	ft_ten_queens_puzzle_recursive(int chessboard[], int p, int *solutions)
{
	int	i;

	i = 0;
	if (p == 10)
	{
		ft_print_solution(chessboard);
		(*solutions)++;
	}
	else
	{
		while (i <= 9)
		{
			chessboard[p] = i;
			if (!attack_possibility(chessboard, p))
				ft_ten_queens_puzzle_recursive(chessboard, p + 1, solutions);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chessboard[10];
	int	solutions;

	solutions = 0;
	ft_ten_queens_puzzle_recursive(chessboard, 0, &solutions);
	return (solutions);
}
