/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:06:51 by aelsafi           #+#    #+#             */
/*   Updated: 2025/11/18 13:13:56 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(char rave_char, va_list args)
{
	int	result;

	if (rave_char == 'c')
		result = ft_putchar(va_arg(args, int));
	else if (rave_char == 's')
		result = ft_putstr(va_arg(args, char *));
	else if (rave_char == 'p')
		result = ft_pointer(va_arg(args, void *));
	else if (rave_char == 'd' || rave_char == 'i')
		result = ft_putnbr(va_arg(args, int));
	else if (rave_char == 'u')
		result = ft_put_unsigned(va_arg(args, unsigned int));
	else if (rave_char == 'x')
		result = ft_put_hex(va_arg(args, unsigned int), 0);
	else if (rave_char == 'X')
		result = ft_put_hex(va_arg(args, unsigned int), 1);
	else if (rave_char == '%')
		result = ft_putchar('%');
	else
		return (-1);
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		written;
	int		result;

	va_start(args, str);
	written = 0;
	while (*str)
	{
		result = 0;
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			result = ft_conversion(*str, args);
		}
		else if (*str != '%')
			result = write(1, str, 1);
		if (result == -1)
			return (va_end(args), -1);
		written += result;
		str++;
	}
	return (va_end(args), written);
}
