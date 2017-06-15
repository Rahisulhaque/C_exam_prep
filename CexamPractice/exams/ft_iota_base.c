#include <stdlib.h>

int		ft_pow(int nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow(nb, pow - 1));
}

char	*ft_itoa_base(int value, int base)
{
	int		i;
	char	*nbr;
	int		neg;

	i = 1;
	neg = 0;
	if (value < 0)
	{
		if (base == 10)
			neg = 1;
		value *= -1;
	}
	while (ft_pow(base, i) - 1 < value)
		i++;
	nbr = (char*)malloc(sizeof(nbr) * i);
	nbr[i + neg] = '\0';
	while (i-- > 0)
	{
		nbr[i + neg] = (value % base) + (value % base > 9 ? 'A' - 10 : '0');
		value = value / base;
	}
	if (neg)
		nbr[0] = '-';
	return (nbr);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	return(0);
}






// #include <unistd.h>
#include <stdlib.h>

int		ft_itoa_size(int value, int base)
{
	if (base == 10 && value < 0)
		return (ft_itoa_size(-value, base) + 1);
	if (value < 0)
		value = -value;
	if (value >= base)
		return (ft_itoa_size(value / base, base) + 1);
	else
		return (1);
}

void	ft_itoa_base_calcule(int value, int base, char *str)
{
	int i;

	i = 0;
	if (base == 10 && value < 0)
		str[0] = '-';
	if (value < 0)
		value = -value;
	if (value >= base)
	{
		ft_itoa_base_calcule(value / base, base, str);
		ft_itoa_base_calcule(value % base, base, str);
	}
	else
	{
		if (value >= 10)
			value = value + 7;
		while (str[i] != '\0')
			i++;
		str[i] = value + '0';
	}
}

char	*ft_itoa_base(int value, int base)
{
	int		length;
	char	*str;

	if (base >= 2 && base <= 16)
	{
		length = ft_itoa_size(value, base);
		str = (char*)malloc(sizeof(char) * (length + 1));
		ft_itoa_base_calcule(value, base, str);
		str[length] = '\0';
	}
	else
		return (0);
	return (str);
}
