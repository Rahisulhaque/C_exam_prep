#include <unistd.h>

void	ft_putchar(char c)
	write(1, &c, 1);

int		main(int ac, char **av){
	char c;

	c = '0';
	while(c <= '9'){
		write(1, &c, 1);
		c++;}
	return (0);}
