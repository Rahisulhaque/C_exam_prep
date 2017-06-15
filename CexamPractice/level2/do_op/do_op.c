#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar('0' + nb);
}

int   ft_atoi(char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 - ('0' - str[i]);
		++i;
	}
	if (str[0] == '-')
		nb = -nb;
	return (nb);
}

int		main(int argc, char **argv)
{
	int	res;

	res = 0;
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	if (*argv[2] == '*')
		res = ft_atoi(argv[1]) * atoi(argv[3]);
	if (*argv[2] == '/')
		res = ft_atoi(argv[1]) / atoi(argv[3]);
	if (*argv[2] == '%')
		res = ft_atoi(argv[1]) % atoi(argv[3]);
	if (*argv[2] == '+')
		res = ft_atoi(argv[1]) + atoi(argv[3]);
	if (*argv[2] == '-')
		res = ft_atoi(argv[1]) - atoi(argv[3]);
	ft_putnbr(res);
	ft_putchar ('\n');
	return (0);
}
