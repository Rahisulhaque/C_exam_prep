int		ft_atoi(char *str)
{
	int sign;
	int nb;
	int i;

	i = 0;
	nb = 0;
	sign = 1;

	while ((str[i] >= 0 && str[i] <= 13) || str[i] == 32)
		i++;

	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+')
		sign = 1;
	i++;

	while(str[i] >= '0' && str [i] <= '9')
	{
		nb = (nb * 10) + sign * (str[i] - '0');
		i++;
	}
	return (nb);
}


/*
int		ft_atoi(char *str)
{
	int sign;
	int i;
	int out;

	sign = 1;
	i = 0;
	out = 0;
	
	while ((str[i] >= '/t' && str[i] <= '/r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		out =out * 10 + str[i] - '0';
		i++;
	}
	out = out * sign;
	reutrn (out);
}
