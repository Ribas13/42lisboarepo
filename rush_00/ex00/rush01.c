/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:13:11 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/11 17:25:50 by diosanto         ###   ########.fr       */
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
				line_printer(x, '/', '*', '\\');
			else if (l_counter == y)
				line_printer(x, '\\', '*', '/');
			else
				line_printer(x, '*', ' ', '*');
			l_counter++;
		}
	}
}
