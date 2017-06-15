/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:04:47 by bmiller           #+#    #+#             */
/*   Updated: 2016/10/31 17:34:34 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int main(void)
{
	printf("atoi: %d is 12345\n", atoi("   12345"));
	printf("ft_atoi: %d is 12345\n", ft_atoi("   12345"));
	printf("atoi: %d is -238\n", atoi("   -238"));
	printf("ft_atoi: %d is -238\n", ft_atoi("   -238"));
	printf("atoi: %d is    \\n\\v182319823\n", atoi("   \n\v182319823"));
	printf("ft_atoi: %d is    \\n\\v182319823\n", ft_atoi("   \n\v182319823"));
	printf("atoi: %d is    182319  823\n", atoi("   182319  823"));
	printf("ft_atoi: %d is    182319  823\n", ft_atoi("   182319  823"));
	printf("atoi: %d is fidjfdifj   182319823\n", atoi("fidjfdifj   182319823"));
	printf("ft_atoi: %d is fidjfdifj   182319823\n", ft_atoi("fidjfdifj   182319823"));
	printf("atoi: %d is ---   182319823\n", atoi("---   182319823"));
	printf("ft_atoi: %d is ---   182319823\n", ft_atoi("---   182319823"));
	printf("atoi: %d is     +182319823\n", atoi("    +182319823"));
	printf("ft_atoi: %d is     +182319823\n", ft_atoi("   +182319823"));
	printf("atoi: %d is --238\n", atoi("--238"));
	printf("ft_atoi: %d is --238\n", ft_atoi("--238"));
	printf("atoi: %d is +-238\n", atoi("+=238"));
	printf("ft_atoi: %d is +-238\n", ft_atoi("+-238"));
	printf("atoi: %d is +=238\n", atoi("+=238"));
	printf("ft_atoi: %d is +=238\n", ft_atoi("+-238"));
	printf("atoi: %d is 2147483647\n", atoi("2147483647"));
	printf("ft_atoi: %d is 2147483647\n", ft_atoi("2147483647"));
	printf("atoi: %d is -2147483647\n", atoi("-2147483647"));
	printf("ft_atoi: %d is -2147483647\n", ft_atoi("-2147483647"));
	printf("atoi: %d is Dienoa238\n", atoi("Dienoa238"));
	printf("ft_atoi: %d is Dienoa238\n", ft_atoi("Dienoa238"));
}
