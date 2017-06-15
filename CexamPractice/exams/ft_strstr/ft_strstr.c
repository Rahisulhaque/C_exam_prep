char	*ft_strstr(char *str, char *to_find)
{
	char *str_start;
	int i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		str_start = str;
		while (str[i] && to_find[i] && str[i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return(str_start);
		str = str_start + i;
	}
	return (0);
}


/*
char	*checkchar( char *str, char *to_find, int i)
{
	int j;
	
	j = 0;
	while (to_find[j] != '\0')
	{
		if (str[i + j] != to_find[j])
			return (0);
		j++;
	}
	return (to_find);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	char *out;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			out = checkchar(str, to_find, i);
		if (out == to_find)
			return (out);
		i++;
	}
	return (out);
}
