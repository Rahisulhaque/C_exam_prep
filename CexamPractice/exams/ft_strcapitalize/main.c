/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:59:41 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/01 17:10:37 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char test1[] = "Hello darkness my old friend";
	char test2[] = "I\'ve Come To Talk With You Again";
	char test3[] = "dAMMIT aRGHGINIG Anndifu     sdjfijSIIII";
	printf("%s\n", ft_strcapitalize(test1));
	printf("%s\n", ft_strcapitalize(test2));
	printf("%s\n", ft_strcapitalize(test3));
}
