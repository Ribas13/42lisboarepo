#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		write(1, "z", 1);
		write(1, "\n", 1);
	}
	while (av[1][i] != '\0' && ac == 2)
	{
		if (av[1][i] == 'z')
		{
			write(1, "z", 1);
			write(1, "\n", 1);
			break ;
		}
		i++;
	}
	if (av[1][i] == '\0')
	{
		write(1, "z\n", 2);
	}
}
