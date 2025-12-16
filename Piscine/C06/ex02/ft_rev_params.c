/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:15:24 by aelsafi           #+#    #+#             */
/*   Updated: 2025/07/08 20:20:27 by aelsafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	l;

	i = 1;
	l = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[l][j])
		{
			ft_putchar(argv[l][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		l--;
	}
	return (0);
}
