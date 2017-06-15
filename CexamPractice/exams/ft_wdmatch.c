#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	char *nl = "\n";
	char *s1;
	char *s2;

	if (ac != 3)
	{
		write(1, nl, 1);
		return (0);
	}
	s1 = av[1];
	s2 = av[2];
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		if (!*s1)
		{
			write(1, av[1], ft_strlen(av[1]));
			write(1, nl, 1);
			return (0);
		}
		s2++;
	}
	write(1, nl, 1);
	return (0);
}







// #include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[i] && s1[j])
	{
		if (s2[i] == s1[j])
			j++;
		i++;
	}
	if (j == ft_strlen(s1))
		ft_putstr(s1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
