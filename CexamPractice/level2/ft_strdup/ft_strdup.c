#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		j;
	int		i;
	char	*dst;

	i = 0;
	j = 0;
	if (str == '\0')
		return (NULL);
	while (str[i])
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	while (str[j])
	{
		dst[j] = str[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
