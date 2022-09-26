#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	if (ac >= 2)
	{
		while (av[c][i] != '\0')
		{
			i++;
		}
		c++;
	}
}
