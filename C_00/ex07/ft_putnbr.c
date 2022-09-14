/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:20:57 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/14 10:23:03 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (i == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		i = 147483648;
	}
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i < 10)
	{
		ft_putchar(i + 48);
		return ;
	}
	else
		ft_putnbr(i / 10);
	ft_putnbr(i % 10);
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
}
*/
