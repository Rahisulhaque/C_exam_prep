#include "../ft_strlen/ft_strlen.c"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*s;

	s = (char *)malloc(99);
	s += ft_strlen(s);
	*s = 0;
	while((*--s = n % 10 + '0') && (n = n / 10))
		;
	return (s);

