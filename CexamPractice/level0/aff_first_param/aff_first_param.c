/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 19:08:48 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 12:53:08 by lpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	if (argc <= 1)
		ft_putchar('\n');
	else if (argc > 1)
		ft_putstr(argv[1]);
	return (0);
}

/*
int main (int argc, char **argv)
{
	int size;
	char *str;

	size = 0;
	str = argv[1];
	if (argc <=	1)
		write(1, "\n", 1);
	else
	{
		while (str[size] != '\0')
			size++;
		write(1, str, size);
		write(1, "\n", 1);
	}
	return (0);
}
*/
