#include <unistd.h>

void	ulstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c -= 32;
		else if (c >= 'A' && c <= 'Z')
			c += 32;
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
