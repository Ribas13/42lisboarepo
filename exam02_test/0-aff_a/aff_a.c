#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "a\n", 2);
	}
	return (0);
}
