/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:23:19 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/22 16:23:21 by diosanto         ###   ########.fr       */
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
	int	c;

	i = argc - 1;
	c = 1;
	while (i > 0)
	{
		c = 0;
		while (argv[i][c] != '\0' && argc)
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		ft_putchar('\n');
		i--;
	}
}
