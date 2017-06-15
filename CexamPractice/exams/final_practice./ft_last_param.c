#include <unistd.h>

void	ft_putstr(char *str){
	while(*str)
		write(1, str++, 1);}

int		main(int ac, char **av){
	if (ac > 1)
		ft_putstr(ac[av - 1]);
	write(1, "\n", 1);
	return (0);}
