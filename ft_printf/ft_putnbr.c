/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:48:12 by aelsafi           #+#    #+#             */
/*   Updated: 2025/11/18 13:48:15 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int c)
{
	long	num;
	int		written;
	int		result;

	num = c;
	written = 0;
	if (num < 0)
	{
		result = ft_putchar('-');
		if (result == -1)
			return (-1);
		written += result;
		num = -num;
	}
	if (num >= 10)
	{
		result = ft_putnbr(num / 10);
		if (result < 0)
			return (result);
		written += result;
	}
	if (ft_putchar((num % 10) + '0') == -1)
		return (-1);
	written++;
	return (written);
}
