#include <unistd.h>

void	ft_last_word(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    i = i - 1;
    while ((str[i] == ' ' || str[i] == '\t') && i >= 0)
        i--;
    while ((str[i] >= 33  && str[i] <= 126) \
           && (str[i - 1] != ' ' || str[i - 1] != '\t'))
        i--;
    i = i + 1;
    while (str[i] >= 33 && str[i] <= 126)
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_last_word(av[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return (0);
}