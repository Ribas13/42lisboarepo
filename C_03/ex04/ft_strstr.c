/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:20:01 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/21 10:49:34 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[c] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
		{
			c++;
		}
		if (to_find[c] == '\0')
		{
			return (str + i);
		}
		i++;
		c = 0;
	}
	return (0);
}
/*
int	main()
{
	char str[] = "Hello world";
	char to_find[] = "world";

	printf("Original: %s\n", str);
	printf("Find: %s\n", to_find);
	printf("%s", ft_strstr(str, to_find));
}*/
