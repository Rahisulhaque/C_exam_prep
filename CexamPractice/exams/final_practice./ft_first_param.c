#include <unistd.h>

void	ft_putchar(char c)
	write(1, &c, 1);

void	ft_putstr(char *str){
	while(*str)
		write(1, str++, 1);}

int		main(int ac, char **av){
	if (ac <= 1)
		ft_putchar('\n');
	if (ac > 1)
		ft_putchar(av[1]);
		ft_putchar('\n');
	return(0);}
