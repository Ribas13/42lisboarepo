/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:00 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/21 15:20:01 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	white_space(char *str)
{
	int	blank;
	int	i;

	i = 0;
	blank = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			i++;
			blank++;
		}
	}
	return (blank);
}

int	hifen_counter(char *str)
{
	int	i;

	i = 0;
	while (str[i + blank] != '\0')
	{
		while (str[i + blank] == '-')
		{
			i++;
		}
		if (!((c % 2) == 0))
		{
			res = (c * -1);
			return (res);
		}
		else
		{
			return (0);
		}
		i = 0;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	blank;
	int	res;
	int	hifen;

	res = 0;
	i = 0;
	c = 1;
	blank = white_space(str);
	hifen = hifen_counter(str);
	while (str[i + blank + c] >= 0 && str[i + blank + c] <= 9)
	{
	}
	return (res);
}
/*
void	ft_atoi_like_test(char *str)
{
	int	buff;
	int	ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int		main(void)
{
	char	*str;

	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	str = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str, -1234);
	return (0);
}*/