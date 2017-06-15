
#include <unistd.h>

void	half_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(i % 2))
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		half_str(argv[i]);
		i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
