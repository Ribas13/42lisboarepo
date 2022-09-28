#include <unistd.h>
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

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src) - 1;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[] = "Hello";
	char 	s2[] = "hola";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s", ft_strcpy(s1, s2));
}
