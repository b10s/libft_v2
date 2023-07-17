/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:29:36 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/17 19:05:33 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

char *
	ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
	char			*res;
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s);
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
