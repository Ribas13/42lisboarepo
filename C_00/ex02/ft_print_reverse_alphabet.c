/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:25:31 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/14 10:31:13 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ap;

	ap = 'z';
	while (ap >= 'a')
	{
		write(1, &ap, 1);
	ap--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
