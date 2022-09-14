/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:49:17 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/14 10:33:56 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ap;

	ap = 'a';
	while (ap <= 'z')
	{
		write (1, &ap, 1);
	ap++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
