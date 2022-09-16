/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:02:49 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/15 14:24:03 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int *p1;
	int *p2;
	int c1;
	int c2;

	c1 = 10;
	c2 = 20;

	p1 = &c1;
	p2 = &c2;

	printf("%d, %d\n", c1, c2);
	ft_swap(p1, p2);
	printf("%d, %d", c1, c2);
}
*/
