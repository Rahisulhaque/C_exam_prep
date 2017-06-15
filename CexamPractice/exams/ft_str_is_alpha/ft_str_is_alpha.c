int		ft_str_is_alpha(char *str)
{
	int c;
	int res;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65 && str[c] <= 90) || (str[c] >= 97 && str[c] <= 122))
			res = 1;
		if ((str[c] <= 64 && str[c] >= 91) || (str[c] <= 96 && str[c] >= 123))
			return (0);
		c++;
	}
	if (c == 0)
		return (1);
	if (res == 1)
		return (1);
}
