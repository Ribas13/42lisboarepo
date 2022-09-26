#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while (av[1][i] != av[2][c])
			{
				c++;
			}
			if (av[1][i] == av[2][c])
			{
				write(1, &av[1][i], 1);
				i++;
				c = 0;
			}
			else
			{
				c++;
			}
		}
		write(1, "\n", 1);
	}
}