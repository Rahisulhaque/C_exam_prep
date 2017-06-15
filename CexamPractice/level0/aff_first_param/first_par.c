#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	int i;
	int y;

	i = 0;
	i = argc - 1;
	if (argc <= 1)
	{
		ft_putchar('\n');
		return(0);
		
	}
	while (argv[i][y])
	{
		ft_putchar(argv[i][y]);
			y++;
	}
	ft_putchar('\n');
	return(0);
}
