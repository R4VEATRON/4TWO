/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:03:46 by aelsafi           #+#    #+#             */
/*   Updated: 2025/07/23 15:44:53 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] < (10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	if (n < 1 || n > 9)
		return ;
	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (arr[0] <= (10 - n))
	{
		print_comb(arr, n);
		i = n - 1;
		arr[i]++;
		while (i > 0 && arr[i] > 9 - (n - 1 - i))
		{
			arr[i - 1]++;
			arr[i] = arr[i - 1] + 1;
			i--;
		}
	}
}

int main()
{
	ft_print_combn(8);
}