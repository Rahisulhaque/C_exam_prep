#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (str[i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return (0);
			}
			i++;
		}
	}
	if (argc != 2)
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
