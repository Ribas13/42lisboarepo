/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:07:25 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/15 20:19:01 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}
