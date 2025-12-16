/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:03:07 by aelsafi           #+#    #+#             */
/*   Updated: 2025/07/09 13:03:08 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_all_lenghts(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	char	*all_together;

	sum = 0;
	i = 0;
	if (size <= 0)
		sum = 1;
	else
	{
		while (i < size)
		{
			sum += ft_strlen(strs[i]);
			i++;
		}
		sum += ft_strlen(sep) * (size - 1);
	}
	all_together = (char *)malloc(sizeof(char) * sum);
	if (all_together == NULL)
		return (0);
	return (all_together);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*all_together;

	all_together = ft_all_lenghts(size, strs, sep);
	if (all_together == NULL)
		return (0);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			all_together[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			all_together[c++] = sep[j++];
		i++;
	}
	all_together[c] = '\0';
	return (all_together);
}
