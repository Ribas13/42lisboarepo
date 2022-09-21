/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:26:04 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/16 16:34:22 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	swap;

	while (size >= 0)
	{
		counter = 0;
		while (counter < size - 1)
		{
			if (tab[counter] > tab[counter + 1])
			{
				swap = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = swap;
			}
			counter++;
		}
		size--;
	}
}
