/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:15:42 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/26 12:15:43 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	divcount;

	i = nb;
	divcount = 0;
	if (nb < 2)
	{
		return (0);
	}
	while (i >= 1 && divcount <= 2)
	{
		if (nb % i == 0)
		{
			divcount++;
		}
		i--;
		if (divcount > 2)
			return (0);
	}
	return (1);
}*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	a;

	a = nb;
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d -> %d\n", 370091, ft_find_next_prime(370091));
	printf("%d -> %d\n", 188423, ft_find_next_prime(188423));
	printf("%d -> %d\n", 244239, ft_find_next_prime(244239));
	printf("%d -> %d\n", 168976, ft_find_next_prime(168976));
	printf("%d -> %d\n", 216082, ft_find_next_prime(216082));
	printf("%d -> %d\n", 2189, ft_find_next_prime(2189));
	printf("%d -> %d\n", 61463, ft_find_next_prime(61463));
	printf("%d -> %d\n", 148515, ft_find_next_prime(148515));
	printf("%d -> %d\n", 150620, ft_find_next_prime(150620));
	printf("%d -> %d\n", 220714, ft_find_next_prime(220714));
	printf("%d -> %d\n", 373814, ft_find_next_prime(373814));
	printf("%d -> %d\n", 251964, ft_find_next_prime(251964));
	printf("%d -> %d\n", 152126, ft_find_next_prime(152126));
	printf("%d -> %d\n", 13383, ft_find_next_prime(13383));
	return (0);
}*/
