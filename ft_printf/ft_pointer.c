/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:46:27 by aelsafi           #+#    #+#             */
/*   Updated: 2025/11/18 13:46:32 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	unsigned long long	address;
	int					written;
	int					result;

	written = 2;
	result = write(1, "0x", 2);
	if (result == -1)
		return (-1);
	address = (unsigned long long)ptr;
	result = ft_put_hex(address, 0);
	if (result == -1)
		return (-1);
	written += result;
	return (written);
}
