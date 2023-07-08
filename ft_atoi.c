/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:11:17 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/08 20:41:33 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_atoi(const char *str) {
	long int	res;
	short		sign;

	res = 0;
	sign = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == '\n')
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10;
		res = res + (int)(*str - '0');
		str++;
	}
	if (sign == 1)
		res = -res;
	return ((int)res);
}
