/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:47:30 by aelsafi           #+#    #+#             */
/*   Updated: 2025/11/18 13:47:33 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	int		written;
	int		result;
	char	digit;

	result = 0;
	written = 0;
	if (n >= 10)
	{
		result = ft_put_unsigned(n / 10);
		if (result < 0)
			return (result);
		written += result;
	}
	digit = (n % 10) + '0';
	result = write(1, &digit, 1);
	if (result == -1)
		return (-1);
	written += result;
	return (written);
}
