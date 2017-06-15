#include <unistd.h>

int			main(int argc, char **argv)
{
	int			i;
	char		*arg;

	if (argc == 2)
	{
		i = -1;
		arg = argv[1];
		while (*arg != '\0')
		{
			while (*arg == ' ' || *arg == '\t')
				arg++;
			if (i != -1 && *arg != '\0')
				write(1, " ", 1);
			i = 0;
			while (arg[i] != '\0' && arg[i] != ' ' && arg[i] != '\t')
				i++;
			write(1, arg, i);
			arg += i;
		}
	}
	write(1, "\n", 1);
	return (0);
}



// #include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*trim_begin_end_space(char *str)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = ft_strlen(str);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[j - 1] == ' ' || str[j - 1] == '\t')
		j--;
	s = (char*)malloc(sizeof(char) * (j - i + 1));
	if (s == NULL)
		return (NULL);
	while (k < j - i)
	{
		s[k] = str[i + k];
		k++;
	}
	s[k] = '\0';
	return (s);
}

void	epur_str(char *str)
{
	int		i;
	int		first;

	i = 0;
	first = 1;
	str = trim_begin_end_space(str);
	if (str != NULL)
	{
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				if (first == 1)
					write(1, &str[i], 1);
				first = 0;
			}
			else
			{
				first = 1;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	free(str);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}







//
Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>
