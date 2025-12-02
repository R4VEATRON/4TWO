/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:48:29 by aelsafi           #+#    #+#             */
/*   Updated: 2025/11/18 13:48:31 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(const char *str)
{
	int	len;
	int	written;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	written = write(1, str, len);
	if (written == -1)
		return (-1);
	return (len);
}
