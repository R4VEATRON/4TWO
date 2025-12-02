/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:29:26 by aelsafi           #+#    #+#             */
/*   Updated: 2025/11/09 15:30:05 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	len;

	if (elsize != 0 && nelem > SIZE_MAX / elsize)
		return (NULL);
	len = nelem * elsize;
	if (len == 0)
		len = 1;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
