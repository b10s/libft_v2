/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:28:54 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/17 17:28:29 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

short	int	ft_detect_sign(int n);
short int	ft_count_future_len(int n);

char *
	ft_itoa(int n) {
	unsigned long	x;
	short int		len;
	short int		i;
	short int		sign;
	char			*res;

	res = NULL;
	sign = ft_detect_sign(n);
	len = ft_count_future_len(n) + sign;
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	x = n;
	if (sign == 1)
		x = -x ;
	res[0] = '-';
	i = 0;
	while (++i <= len - sign)
	{
		res[len - i] = '0' + x % 10;
		x = x / 10;
	}
	res[len] = '\0';
	return (res);
}

short int
	ft_detect_sign(int n) {
	if (n < 0)
		return (1);
	return (0);
}

short int
	ft_count_future_len(int n) {
	short int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n != 0)
	{
		res++;
		n = n / 10;
	}
	return (res);
}
