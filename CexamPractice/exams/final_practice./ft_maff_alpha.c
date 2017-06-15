#include <unistd.h>

void	ft_putchar(char c)
	write(1, &c, 1);

int		main(void){
	int i;
	char c;

	c = 'a';
	i = 0;
	while(i < 26){
		if (i % 2)
			ft_putchar(c + i - 32);
		else
			ft_putchar(c + i);
		i++;
	ft_putchar('\n');
	return (0);
