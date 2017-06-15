#include <unistd.h>

void	ft_putchar(char c)
	write(1, &c, 1)

int		main(int ac, char **av){
	int i;
	char *str;

	i = 0;
	str = av[i];

	if (ac == 2){
		while (str[i] != '\0'){
			if (str[i] == 'a'){
				ft_putchar('a');
				ft_putchar('\n');
				return(0);}
			i++;}}
	if (ac != 2)
		ft_putchar('a');
	ft_putchar('\n');
	return(0);}




void	ft_putchar(char c)
	write(1, &c, 1)

int		main(int ac, char **av){
	int i;
	char *str;

	i = 0;
	str = av[i];

	if (ac == 2)
		while (str[i] != '\0')
			if (str[i] == 'a')
				ft_putchar('a');
				ft_putchar('\n');
				return (0);
			i++;
	if (ac != 2)
		ft_putchar('a')
	return(0);}







void	ft_putchar(char c)
	write(1, &c, 1);

int		main(int ac, char **av)
	char *str;
	int i;

	i = 0;
	str = av[i];
	if (ac == 2)
		while(str[i] != '\0')
			if (str[i] == 'a')
				ft_putchar('a')
				ft_putchar('\n')
				return(0)
			i++;
	if (ac != 2)
		ft_putchar('a');
	return(0);





void	ft_putchar(char c)
	write(1, &c, 1)

int		main(int ac, char *str)
	int i;
	char *str;

	i = 0;
	str = av[i];

	if (ac == 2)
		while(str[i] != '\0')
			if (str[i] == 'a')
				ft_putchar('a');
				ft_putchar('\n;);
				return (0);
			i++;
	if (ac != 2)
		ft_putchar('a')
	return(0);





void	ft_putchar(char c)
	write(1, &c, 1)

void	ft_putstr(char *str)
	while(*str)
		write(1, str++, 1);

int		main(int ac, char *av)
	if (ac <= 1)
		ft_putchar ('\n')
	if (ac > 1)
		ft_putchar(av[1])
	return (0);






void	ft_putchar
void	fT_putstr
int		main (ac, av)
	if(a <= 1)
		ft_putchar('\n')
	if(a > 1)
		ft_putchar(av[1])
	return(0);



void	ft_putchar
int		main(ac, av)
	char *str;
	int i;

	i = 0;
	str = av[i];
	if(ac == 2)
		while(str[i] != '\0')
			if (str[i] == 'a')
				ft_putchar('a\n')
				return(0)		
			i++;
if (ac != 2)
		ft_putchar('a')
	return(0)


void	ft_putchar
void	ft_putstr
int		main(ac, av)
	int i;
	char c;

	i = 0;
	if(ac <= 1)
		ft_putchar('\n');
	if(ac > 1)
		ft_putchar(av[i]);
	return




void	ft_putchar
int		main(ac,av)
	int i;
	char *str;

	i = 0;
	str = av[i]
	if (a == 2)
		while(str[i] != '\0')
			if(str[i] == 'a')
				ft_putchar('a\n')
				return(0)
			i++;
	if (a != 2)
		ft_putchar('a')
	return (0);




void	ft_putchar
void	ft_putstr
int		main(ac, av)
	if (ac <= 1)
		ft_putchar('\n')
	if (ac > 1)
		ft_putchar(av[1]);
	return(0);




void	ft_putchar
void	ft_putstr
int		main(ac,av)
	if(ac >1)
		ft_putstr(av[ac-1])
	write(1, "\n", 1)
	return()




int main(ac, av)
	if (ac <= 1)
		putchar('\n'
	if (ac > 1)
		putchar(av[i])





int main(ac, av)
	if (ac >1)
		ft_putstr(av[ac-1])
	write('\n')
	return




int main(ac, av)
	int i = 0;
	char *str = av[i]
	if (ac == 2)
		while(str[i] != '\0')
			if(str[i] == 'a')
				putchar('a\n')
				return
			i++;
	if (ac != 2)
		putchar('a')
	return



int main(ac, av)
	if (ac <= 1)
		ft_putchar\n
	if (ac > 1)
		ft_putcar(av[1])



int main(ac, av)
	int i;
	
	if (ac > 1)
		ft_putstr(av[ac-1])
	putchar\n
	return



int main (void)
	int i = 0
	char c = 'a'

	while(i < 26)
		if(i %2)
			putchar(c + i - 32)
		else
			putchar(c+i)
	putchar('\n')
	return




int main(void)
	int i = 0;
	char c = 'a';
	while(i < 26)
		if (i %2)
			putchar c + i - 32
		else
			putchar c + i
	putchar \n


int main()
	char c = 0;
	while(c <= '9')
		write(1, &c, 1)'
		c++;
	return 0



int main()
	char c = 0
	while(c <= '9')
		write(1, &c, 1)
		c++;
	return




int main()
	char c = 0;
	while (c <= '9')
		write81 
		c++




echo ${#FT_LINE}














int main(ac, av)
	int	len;
	char *arg

	if (ac == 2)
		arg = av[i]
		while(*arg == ' ' || *arg == '\t')
			arg++
		len = 0;
		while(arg[len] != '\0' && arg[len 
			len++;
		write(1, arg, len)
	write(\n)
	return0





echo ${#FT_LINE}
	if (ac != 2)






int		main(ac, av)
	int len
	char *arg

	if (ac == 2)
		arg = av[i]
		while(*arg ' ' || '\t')
			arg++
		len = 0;
		while(arg [len\ \0 &&)
			len++
		write(1, arg,len)
	write\n



int		main(void)
	int i = 9
	while(i >= 0)
		putchar(i + '0')
		i--;
	putchar(\n)




int main()
	int i= 9;
	while (i >= 0)
		putchar( i+ '0')
		i--;
	putchar\n


void	putstr(char *Str)
	while(*str)
		write(1, str++, 1)




void	*ft_strcpy(char *s1, char *s2)
	int i = 0;
	while(s1[i] && s2[i])
		s1[i] = s2[i]
		i++
	s1[i] = \0
	return (s1)





void	*ft_strcpy(char s1*, char s2*)
	int i;
	while(s1[i] && s2[i])
		s1[i] = s2[i]
		i++
	s1[i] = \0
	return s1



*strcpy
	int i
	while(s1[i] && s2[i])
		s1[i] = s2[i]
		i++
	s1[i] = \0
	return s1



strlen(char *str)
	int count = 0
	while(str[count]
			count++
	return (count)





int main (ac, av)
	char *str = av[1]
	itn i = 0
	int x = 0

	if (ac == 2)
		if (str == '\0')
			write \n
		else
			while(str[i])
				
				if(str[i] >= 'a' && str[i] <= 'z')
					 x= str[i] - 'a'
					 while(x >= 0)
						write(&str[i])
						x--;

				else if(str[i]) >= 'A' && str[i] <= 'Z')
					x = str[i] - 'A'
					while(x >= 0)
						write(&str[i])
						x--;
				
				else
					write(&str[i])
				
				i++;

		write(\n)
		
	else
		write(\n)
	return (0)







int main (ac, av)
	char *str = av[1]
	int i = 0;
	int x = 0

	if (ac == 2)
		if (str == '\0')
			\n
		else
			while(str[i])
				if(str[i]'a'&&'z')
					x = str[i] - 'a'
					while(>= 0)
						write(&str[i])
						x--

				else if(str[i] 'A' &&'Z')
					x = str[i] - 'Z'
					while( x >= 0)
						writE(&str[i])
						x---;

				else
					write(&str[i]
				i++
		write \n
	else
		write \n








int main(ac,av)
	char *str = av[1]
	int i = 0
	int x = 0

	if (ac == 2)
		if (str == \0)
			\n
		else
			while (str[i])
				if (str[i] 'a' 'z'z &&)
					x = str[i] -'a'
					while(x >= 0)
						write(&str[i])
						x--

				else if *str[i] 'A' &&'Z'(
					x = str[i] -'A'
					while(x >= 0)
						write(&str[i])
						x--
				else 
					write(&str[i])
				i++
			\n
		\n





int (ac, av)
	char c
	int i

	c = '\n'
	if (ac != 2)
		wrtie(&c)
	else
		i = 0;
		while(av[1][i])
			i++
		i--
		while (i >= 0)
			write(1, &av[1][i], 1)
			i--;
		write(1, &c, 1)





int(ac,av)
	char c
	int i

	c = '\n'
	if (ac != 2)
		write (&c)
	else
		i = 0
		while(av [1] [i])
			i++
		i--;
		while(i >= 0)
			write(1, &av[1][i], 1)
			i--;
		write(1, &c, 1)
return 0





int (ac, av)
	char c
	int i

	c = '\n'
	i = 0
	if (ac != 2)
		&c
	else
		while(av [1][i])
			i++
		i--
		while(i >= 0 )
			write(&av[1][i])
			i--
		write &c





int (ac, av)
	char c = '\n'
	int i = 0

	if (ac != 2)
		write &C
	else
		while(av[1][i])
			i++
		i--
		while(i >= 0)
			write(&av[1][i])
			i--
		write &c



int (ac, av)
	char c = '\n'
	int i = 0

	if (ac != 2)
		write &C
	else
		while(av[1][i])
			i++
		i--
		while(i >= 0)
			write(&str[i])
			i--
		write &c
	return




int (ac, av)
		char c = '\n'
		int i = 0

		if (ac != 2)
			&c
		else
			while(av[1][i])
				i++
			i--
			while(i >= 0)
				write(&str[1][i])
				i--
			write &c





	int ac av
		char c = \n
		int i= 0
		if(ac != 2)
			&c
		else
			while(av[1][i])
				i++
			i--
			while(i >= 0)
				write(&str[i])
				i--
			write &C





int		main(ac,av)
	int i = 0

	if( ac != 2)
		\n
	else
		while([1][i]
				if av[1][i] > 64 && av[1][i] < 91
					if (av[1][i] + 13) > 90
						av[1][i] = av[1][i] + 13
					else
						av[1][i] = av[1][i] + 13
				
				if av[1][i] > 96 && av[1][i] < 123
					if av[1][i] + 13





int main (ac,av)
	int i = 0
	int a = av[1][i]

	if (ac != 2)
		\n
	else
		while (a)
			if ( a >64 && av < 91)
				if (a + 13) > 90
					a = 13 - (91 - a) + 65
				else
					a = a + 13
			if (a > 96 && a < 123)
				if (a + 13) > 122
					a = 13 - (123 - a) + 97
				else
					a = a + 13
			i++
		ft_putstr(av[1])
	return 0








int main(ac, av)
	int i = 0
	int a = av[1][i]

	if (ac != 2)
		\n
	
	else
		while(a)
			if(a >= 'A'	&& <= 'Z'0
				if (a + 13) > 'Z'
					a = 13 - (91 - a) + 'A'
				else
					a = a + 13
			if (a >= 'a' && a <= 'z')
				if (a + 13) > 'z'
					a = 13 - (123 - a) + 'a'
				else
					a = a + 13
			i++
		ft_putstr(av[1])
	return(0);




ac,av
i = 0
a = 

if (ac != 2) 
	/n
else
	while a
		if a>= 'A
			if (a+13) > 'z'
				a = 13 - (('z' + 1) - a) + 'A'
			else
				a = a + 13
		if a>=  'a'
			if (a+13) > 'z'
				a = 13 - (('z'+1) -a) + 'a'
			else
				a = a +13
		i++
	purstr(av[1])






if (ac != 2)
	\n 
while a
	if a >= 'A''Z'
		if (a +13) > 'Z'
			a = 13 - ((Z+1)-a)+'A'
		else
			a = a + 13
	if a >= 'a''z'
		if (a+13) > 'z'
			a = 13 - ((z+1)-a)+'a'
		else
			a = 13 + a
	i++
ft_pustr(av[1])






int i = 0
int a = av[1][i]

if (ac != 2)
	/n
while (a)
	if (a 'A''Z')
		if (a +13 )> 'Z'
			a = 13 - (('Z'+1)-a) + 'A'
		else
			a = a +13
	if (a 'a' 'z')
		if (a + 13) > 'z'
			a = 13 - (('z' +1)-a) + 'a'
		else
			a= a+13
	i++
putstr(av[1])







ulstr(char *str)
	int i = 0
	char c

	while(str[i])
		c = str[i]
		if (c >= 'a' &&'z')
			c -= 32
		else if ( c >= 'A''Z')
			c +=32
		write(&c)
		i++

int main(ac,av)
	if (ac >1)
		ulstr(av[1])
	write("\n")
	return 












ulstr(char *str)
	int i = 0
	char c
	while(str[i])
		c = str[i]
		if(c 'a' 'z')
			c -=32
		else if (c'A''Z')
			c+=32
		wrtie(&c)
		i++

int main(ac,av)
	if (ac >1)
		ustr(av[1])
	write(\n)






ulstr(char *Str)
	int i = 0
	char c
	while(str[i])
		c = str[i]
		if(c 'a' 'z')
			c -= 32
		else if (c 'A''Z')
			c += 32
		write(&c)
		i++

int main(ac,av)
	if (ac > 1)
		ustr(av[1])
	write \n



ulstr(*str)
	int i =0 
	char c
	while (str[i])
		c = str[i]
		if (a'a''z')
			c -=32
		if (a'A''Z')
			c +=32
		write (&c)
		i++
	
int main (ac, av)
	if (ac >1)
		ulstr(av[1])
	write\n




ulstr(*str)
	int i =0
	char c

	while(str[i])
		c = str[i]
		if(a 'a'z'z)
			c -=32
		if (a 'A''Z'(
			c +=32
		write(&c)
		i++

int	main(ac,av)
	if(ac > 1)
		ulstr(av[1])
	wrtie\n





ulstr)*str)
	int i=0
	char c
	while(str[i])
		c = str[i]
		if(a 'a''z')
			c -= 32
		if (a 'A''Z')
			c +=32
		write &c
		i++
int	main (ac,av)
	if(ac >1)
		ulstr(av[1])
	wrtie\n



rotone
int main(ac,av)
	int i = 0
	if (ac ==2)
		while(a)
			if (a >= 'a' 'z')
				if (av == 'z')
					putchar('a')
				else
					putchar(a + 1)
			else if (a 'A' 'Z')
				if (a = 'A')
					putchar 'A'
				else
					putchar (a + 1)
			else
				putchar(a)
			++i
		\n



rotone
	int i = 0
	if (ac = 2)
		while(a)
			
	
			if (a >= 'a' 'z')
				if (a == 'z')
					putchar 'a'
				else
					putcahr 1 + a

			else if (a 'A' 'Z'
				if (a == 'Z'
					putchar 'A'
				else
					putchar a+1

			else
				putchar a +1
		++i
	\n
		








aff_a
int main(ac, av)
	int i = 0
	char *str  = av[i]

	if (ac == 2)
		while str[i] != '\0'
			if str [i] == 'a'
				ft_putchar('a'
				putchar(\n)
				return(0)
			i++
	if (ac != 2)
		putchar 'a'
	write \n





first_param
	if (ac <= 1)
		ft_putchar \n
	if (ac > 1)
		putchar av[1]
		putchar \n
	return 0;



last_param
	if (ac > 1)
		ft_putstr(av[ac-1])

int main
int i = 0
while (i >= '0')
	wrt



int main
	char c = 0

	while c >= '9'



int main(ac, av)
	int len
	char *arg
	while( ac == 2)
		arg = av[1]
	 	if (*arg == ' '|| *arg == '\t')
			arg++
		len = 0
		if(arg(len) != '\0' && arg(len != ' ' '\t)
			len++
		write(1. arg. len_
	\n


INT I =	9
WHILE( i <= '9')
	write(1, &c,,1)
	c++
	

strcpy
	while s1pi] && s2[i]
		s1[i] = s2[i]
		i++
	s[1] = \0


strlen
	int count = 0
	while (str[count])
		count++
	reutnr(count_]]







atoi
	int sign
		nb
		i
	while(str[i] >= 0 && <= 13 || 32)
		i++
	
	if (str[i] == -' '+'
		sig
	i++

	while(str[i] >= '0;&& '9')
		nb = nb    -'0'
		i ++
	return (nb)







aff_a
	if ac == 2
		while (str[i] != '\0')
			if (str[i] == 'a')
				ft_putchar ('a'/n)
				retur
			i++	
	if ac != 2
		putchar'a'
	putchar /n
	return 



first _param
	if (ac <= 1)
		\n
	if (ac > 1)
		ft_putchar 


last_param
	if (ac > 1)
		putstr(av[ac -1])


print number


maff_alpha
	c = 'a'
	int i
	whle (i > 26)
		if (i % 2)
			ft_putchar (i + c -32 )
		lese 
			ft_putchar(i + c)
		i++
	\n

first_word
if (ac == 2)
	arg = av[i]
	while(*arg ' ' || '\t')
		arg++
	len = 0
	while(arg(len) != '0 ' ' ' \t'
			len++
	write(1, arg, len)
\n



repeat_alpha
	char*str
	if (a== 2)
		if (str == '\0')
			\n
		else
			while (str[i] 'a'
				x= str[i] - 'a'
				while (x >= 0)
					write( &str[i])
					x--
			else
				write(&str[i])
			i++




rev-print
	c = '\n'
	if (ac != 2)
		write (&c)
	else
		while (a)
			i++
		i--

		while(i >= 0)
			write(&str[i])
			i--
		write(&c)











	\

					

