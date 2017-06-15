#include <unistd.h>

int main(void)
{
	int i;
	char j;
	char x;
	char m;

	i = 1;
	j = 'a';
	x = '\n';
	while (i <= 26 && j <= 'z')
	{
		if (i % 2 != 0)
			write(1, &j, 1);
		else
		{
			m = j - 32;
			write(1, &m, 1);
		}
		i++;
		j++;
	}
	write(1, &x, 1);
	return (0);
}
