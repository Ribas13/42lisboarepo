/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:48:13 by diosanto          #+#    #+#             */
/*   Updated: 2022/09/26 15:48:14 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (dest[i] != '\0')
	{
		counter++;
	}
	while (src[i] != '\0')
	{
		dest[counter + i] = src[i];
		i++;
	}
	dest[counter + i] = '\0';
	return (dest);
}

int	ft_flen(char **strs, int size, char *sep)
{
	int	i;
	int	s;
	int	n;

	s = 0;
	i = 0;
	while (i < size)
	{
		n = 0;
		while (strs[i][n])
		{
			s++;
			n++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	s += i * (size - 1);
	return (s);
}

char	*ft_putsep(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	a;
	int	b;

	a = 1;
	b = 0;
	i = 0;
	while (size > 1 && strs[a])
	{
		if (b == 1 && strs[a])
		{
			ft_strcat(str, strs[a]);
			a++;
			b = 0;
			size--;
		}
		else if (b == 0)
		{
			ft_strcat(str, sep);
			b = 1;
		}
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	if (size >= 0)
	{
		str = (char *)malloc((ft_flen(strs, size, sep) + 1) * sizeof (char));
		if (size == 0)
			return ((char *)malloc(sizeof(char)));
		while (strs[0][i] != '\0')
		{
			str[i] = strs[0][i];
			i++;
		}
		str[i] = '\0';
		str = ft_putsep(size, strs, sep, str);
		return (str);
	}
	return (0);
}
//while (i < size) this means run the loop until we reach the entire number
//of strings provided
//full_len --> calculate the entire size of the array with separators

int	main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "a";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}
