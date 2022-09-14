/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:37:19 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/14 10:29:45 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numb;

	numb = '0';
	while (numb <= '9')
	{
		write(1, &numb, 1);
	numb++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
