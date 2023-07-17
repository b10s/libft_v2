/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:36:56 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/17 20:14:03 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./libft.h"

unsigned long	ft_find_divisor(unsigned long n);

void
	ft_putnbr_fd(int n, int fd) {
	unsigned long	uln;
	unsigned long	div;
	short int		dig;
	char			c;

	uln = n;
	if (n == 0)
	{
		write(fd, (const void *)"0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, (const void *)"-", 1);
		uln = -uln;
	}
	div = ft_find_divisor(uln);
	while (uln > 0)
	{
		dig = uln / div;
		uln = uln % div;
		div = div / 10;
		c = '0' + dig;
		write(fd, (const void *)&c, 1);
	}
}

unsigned long
	ft_find_divisor(unsigned long n) {
	unsigned long	res;

	res = 1;
	while (n <= res)
		res = res * 10;
	res = res / 10;
	return (res);
}
