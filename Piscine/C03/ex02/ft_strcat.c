/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:11:38 by aelsafi           #+#    #+#             */
/*   Updated: 2025/07/04 12:11:38 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (dest[j])
		j++;
	while (src[k])
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
