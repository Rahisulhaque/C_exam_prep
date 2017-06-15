#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] == 'Z')
				ft_putchar('A');
			else if (str[i] == 'z')
				ft_putchar('a');
			else
				ft_putchar(str[i] + 1);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	rotone(argv[1]);
	return (0);
}









// #include <unistd.h>

void	rotone(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'y')
			c++;
		else if (c == 'z')
			c = 'a';
		else if (c >= 'A' && c <= 'Y')
			c++;
		else if (c == 'Z')
			c = 'A';
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
