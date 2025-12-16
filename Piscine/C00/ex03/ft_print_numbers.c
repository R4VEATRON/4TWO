/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:31:30 by aelsafi           #+#    #+#             */
/*   Updated: 2025/07/23 15:48:58 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= 9)
	{
		write(1, &digit, 1);
		digit++;
	}
}
