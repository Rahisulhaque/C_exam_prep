/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2016/11/01 13:14:44 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/01 16:02:55 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char test[] = "WHATEVS DUDE";
	char test2[] = "INEKAIDNXIKJ112123     KJDIFADNFIASFDNILLLLLLLLLLLLLLLGAAAAAAHHHHHHHHHHHAAA";

	printf("%s is %s\n", test, ft_strlowcase(test));
	printf("%s is %s\n", test2, ft_strlowcase(test2));
}
