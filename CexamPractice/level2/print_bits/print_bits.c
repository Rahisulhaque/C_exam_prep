#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	n;

	n = 128;
	while (n > 0)
	{
		if (octet & n)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		n /= 2;
	}
}
