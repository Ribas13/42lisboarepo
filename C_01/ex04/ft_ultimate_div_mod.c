/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:16:46 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/15 12:05:15 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	if (*b != 0)
	{
		c = *a / *b;
		d = *a % *b;
		*a = c;
		*b = d;
	}
}

/*
int	main(void)
{
	int c = 10;
	int d = 5;
	int *a = &c;
	int *b = &d;

	printf("%d ", c);
	printf("%d\n ", d);

	ft_ultimate_div_mod(a, b);

	printf("*a = %d\n", *a);
	printf("*b = %d", *b);
}*/
