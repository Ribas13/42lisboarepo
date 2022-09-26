/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstiedl <mstiedl@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:55:08 by mstiedl           #+#    #+#             */
/*   Updated: 2022/09/24 17:53:38 by mstiedl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base, int length )
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

void	ft_putnbr_base(int nbr, char *base)
{	
	int		baselen;
	int		error;
	long	sub;

	sub = nbr;
	baselen = ft_strlen(base);
	error = ft_check_base(base, baselen);
	if (error == 1)
	{
		if (sub < 0)
		{
			write(1, "-", 1);
			sub *= -1;
		}				
		if (sub >= baselen)
		{
			ft_putnbr_base(sub / baselen, base);
			ft_putnbr_base(sub % baselen, base);
		}
		if (sub < baselen)
			write(1, &base[sub], 1);
	}
}

/*int main()
{
	int nbr = 47483647;
	char base[] = {"0123456789"};

	ft_putnbr_base(nbr, base);
}*/
