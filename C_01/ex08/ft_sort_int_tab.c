/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:26:04 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/16 10:59:14 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_array(int *tab, int size)
{
	int	counter;

	counter = 0;

	while(counter <= size - 1)
	{
		printf("%d, ", tab[counter]);
		counter++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int swap;

	while(size >= 0)
	{
		counter = 0;
		while(counter < size - 1)
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
/*
int	main(void)
{
	int	size;
	int arr[5] = {4, 1, 53, 5, 967};
	size = 5;

	print_array(arr, size);
	printf("\n");
	ft_sort_int_tab(arr, size);
	print_array(arr, size);
}*/
