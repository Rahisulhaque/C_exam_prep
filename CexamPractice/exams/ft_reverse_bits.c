int		ft_pow(int nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow(nb, pow - 1));
}

unsigned char	reverse_bits(unsigned char octet)
{
	int nb;
	int *reverse[8];
	int count;

	nb = octet;
	count = 0;
	while (nb > 0)
	{
		reverse[count] = nb % 2;
		nb = nb / 2;
		count++;
		printf("%i", reverse[count]);
	}
	count = 0;
	nb = 0;
	while (count < 8)
	{
		nb *= 		
	}
	//return (reverse);
}

int		main()
{
	printf("%c", reverse_bits(a));
	return (0);
}
