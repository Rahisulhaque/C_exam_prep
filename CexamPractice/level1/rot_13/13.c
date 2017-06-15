#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int y;
	char v;

	if (argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			v = argv[1][i] - 'A' + 13;
			if (v >= 26)
				v = v - 26;
			v = v + 'A';
			ft_putchar(v);
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			v = argv[1][i] - 'z' + 13;
			if (v >= 26)
				v = v - 26;
			v = v + 'a';
			ft_putchar(v);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	return(0);
}