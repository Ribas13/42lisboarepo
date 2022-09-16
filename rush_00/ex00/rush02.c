/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:58:53 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/11 16:59:48 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	line_printer(int xloc, char first, char mid, char last)
{
	int	counter;

	counter = 1;
	while (counter <= xloc)
	{
		if (counter == 1)
			ft_putchar(first);
		else if (counter == xloc)
			ft_putchar(last);
		else
			ft_putchar(mid);
		counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	l_counter;

	l_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (l_counter <= y)
		{
			if (l_counter == 1)
				line_printer(x, 'A', 'B', 'A');
			else if (l_counter == y)
				line_printer(x, 'C', 'B', 'C');
			else
				line_printer(x, 'B', ' ', 'B');
			l_counter++;
		}
	}
}
