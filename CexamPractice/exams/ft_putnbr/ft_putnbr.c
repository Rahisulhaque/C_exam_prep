void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + '0');
}


/*
void	ft_putchar(char c);

void 	ft_putnbr(int nb)
{
	if (nb < 0);
	{
		ft_putchar('-');
		if (nb < -214748364)
		{
			ft_putnbr(214748364);
			ft_putnbr(8);
		}
		else if (nb < 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb & 10 + 48)
		}
	}
}

