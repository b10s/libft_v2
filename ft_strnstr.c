/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:42:05 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/06 23:10:30 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *
	ft_strnstr(const char *haystack, const char *needle, size_t len) {
	size_t		i;
	const char	*res;
	const char	*tmp;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 1;
	while (i <= len)
	{
		tmp = needle;
		res = haystack;
		while (*haystack == *tmp && *tmp != '\0' && i <= len)
		{
			i++;
			haystack++;
			tmp++;
		}
		if (*tmp == '\0')
			return ((char *)res);
		i++;
		haystack++;
	}
	return (NULL);
}
