//
Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$






#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	 main(void)
{
	int i;
	char c;
	
	c = 'a';
	i = 0;
	while (i < 26)
	{
		if (i % 2)
			ft_putchar(c + i - 32);
		else
			ft_putchar(c + i);
		i++;
	}
	ft_putchar('\n');
	return (0); 
}







//
#include <unistd.h>

int		main(void)
{
	char	min;
	char	maj;

	min = 'a';
	maj = 'B';
	while (maj <= 'Z')
	{
		while (min <= 'y')
		{
			write(1, &min, 1);
			write(1, &maj, 1);
			min = min + 2;
			maj = maj + 2;
		}
	}
	write(1, "\n", 1);
}
