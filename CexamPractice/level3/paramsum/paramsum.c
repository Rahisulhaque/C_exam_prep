
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x + '0');
}

int		main(int argc, char **argv)
{
	int		x;

	argv[1] = "0";
	x = argc - 1;
	if (x >= 0)
		ft_putnbr(x);
	write(1, "\n", 1);
	return (0);
}
