/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:55:40 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/15 13:49:42 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *a)
{
	*a = 42;
}

/*
int	main(void)
{
	int numb;
	numb = 100;

	int *pointer;

	pointer = &numb;

	printf("%d\n",*pointer);
	ft_ft(pointer);
	printf("%d", *pointer);
}*/
