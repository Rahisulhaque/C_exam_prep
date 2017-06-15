int		max(int* tab, unsigned int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i + 1] < tab[i])
			return (tab[i]);
		i++;
	}
	return (0);
}
