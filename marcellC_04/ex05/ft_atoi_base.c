/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:07:33 by mstiedl           #+#    #+#             */
/*   Updated: 2022/09/24 21:07:14 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_atoi_base(char *str, char *base);
int	ft_atoi(char *str);

int	ft_strlen(char *len)
{
	int	i;

	i = 0;
	while (len[i])
		i++;
	return (i);
}

int	ft_check_base(char *base, int length)
{
	int	i;
	int	i2;

	i = 0;
	if (length == 1 || base[0] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		if (base[i] <= 32 || base[i] == 127)
			return (0);
		i2 = i + 1;
		while (base[i2])
		{
			if (base[i] == base[i2])
				return (0);
			else
				i2++;
		}
	i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{	
	int		baselen;
	int		error;
	long	sub;
	int		i;

	i = 0;
	baselen = ft_strlen(base);
	error = ft_check_base(base, baselen);
	if (error == 0)
		return (0);
	while (base[i])
	{
		str[i] = base[i];
		i++;
	}
	sub = ft_atoi(str);
	return (sub);
}

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	neg;

	i = 0;
	value = 0;
	neg = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' \
	|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = value * 10 + str[i] - 48;
		i++;
	}
	return (value * neg);
}
