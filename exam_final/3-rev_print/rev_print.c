/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:18:42 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/28 12:18:47 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write (1, "\n", 2);
	return (str);
}

int	main(int ac, char **av)
{
	(void)ac;
	rev_print(av[1]);
	return (0);
}
