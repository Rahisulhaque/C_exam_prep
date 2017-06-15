/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 12:52:25 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/01 01:43:21 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	ft_putnbr(int n);

int		main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-32);
	ft_putchar('\n');
	ft_putnbr(2170293980);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(-213092837);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(2147483648);
	ft_putchar('\n');
	ft_putnbr(2800);
	ft_putchar('\n');
	ft_putnbr(-2800);
	ft_putchar('\n');
}
