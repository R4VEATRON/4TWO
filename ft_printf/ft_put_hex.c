/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:47:02 by aelsafi           #+#    #+#             */
/*   Updated: 2025/11/18 13:47:08 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long long n, int uppercase)
{
	int		written;
	int		result;
	char	*base;
	char	digit;

	if (uppercase == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	written = 0;
	if (n >= 16)
	{
		result = ft_put_hex(n / 16, uppercase);
		if (result < 0)
			return (result);
		written += result;
	}
	digit = base[n % 16];
	result = write(1, &digit, 1);
	if (result == -1)
		return (-1);
	written += result;
	return (written);
}
