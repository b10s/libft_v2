/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:54:08 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/10 22:30:26 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>
#include <stdio.h>

char *
	ft_strtrim(char const *s1, char const *set) {
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (char *)s1 + ft_strlen(s1);
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
	{
		s1++;
		len--;
	}
	if (s1 != ptr)
		ptr--;
	while (ptr != s1 && ft_strchr(set, *ptr) != NULL)
	{
		ptr--;
		len--;
	}
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
