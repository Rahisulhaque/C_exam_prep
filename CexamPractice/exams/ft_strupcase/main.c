/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 13:14:44 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/01 15:32:57 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char test[] = "whatevs dude";
	char test2[] = "INEkaidnxiKJ112123     kjdifadnfiasfdniLLLLLLLLLLLLLLLGAAAAAAHHHHHHhhhhhAaa";

	printf("%s is %s\n", test, ft_strupcase(test));
	printf("%s is %s\n", test2, ft_strupcase(test2));
}
