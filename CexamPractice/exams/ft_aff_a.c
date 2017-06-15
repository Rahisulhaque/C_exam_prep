#include <unistd.h>

/*no...............`

int main(int argc, char **argv)
{
	if (argc <= 2)
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
		
*/

#include <unistd.h>

void	ft_putchar(char c)
	write(1, &c, 1);

int		main(int ac, char **av)
{
	char *str;
	int i;

	i = 0;
	str = av[i];

	if (ac == 2){
		while (str[i] != '\0'){
			if (str[i] == 'a'){
				ft_putchar('a');
				ft_putchar('\n');
				return (0);}
			i++;}}}
	if (ac != 2)
		ft_putchar('a');
	ft_putchar('\n')'
	return(0);}





# include <unistd.h>

void ft_putchar(char c)
	write(1, &c, 1);

int	(int ac, char **av){
	int i;
	char *str;

	i = 0;
	str = av[i];

	if(ac == 2){
		while(str[i] != '\0'){
			if(str[i] == 'a'){
				ft_putchar('a/n');
				return(0);}
			i++;}}}
	if (ac != 2)
		ft_putchar('a');
	ft_putchar('\n');
	return(0);}




#include <unistd.h>

void	ft_putchar(char c)
	write(1, &c, 1);

int		main(int ac, char **av){
	int i;
	char *str;

	i = 0;
	str = av[i];

	while(ac == 2){
		while(str[i] != '\0'){
			ft_putchar('a');
			ft_putchar('\n');
			return(0);
		i++;
	if (ac != 2)
		ft_putchar('a');
	ft_putchar('\n');
	return (0);}
u

