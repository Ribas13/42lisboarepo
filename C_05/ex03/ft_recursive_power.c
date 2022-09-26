/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:35:29 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/25 11:35:32 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (result);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 4;
	printf("number: %d\n", nb);
	printf("power: %d\n", power);
	printf("result: %d\n", ft_recursive_power(nb, power));
}*/
