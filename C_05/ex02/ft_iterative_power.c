/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:13:42 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/25 11:13:43 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 0;
	printf("number: %d\n", nb);
	printf("power: %d\n", power);
	printf("result: %d\n", ft_iterative_power(nb, power));
}*/
