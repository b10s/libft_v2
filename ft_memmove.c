/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:35:01 by aenshin           #+#    #+#             */
/*   Updated: 2023/05/27 23:47:13 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *
	ft_memmove(void *dst, const void *src, size_t len) {
	void	*tmp;

	tmp = dst;
	if (src < dst)
	{
		dst = dst + len - 1;
		src = src + len - 1;
		while (len-- > 0)
		{
			*(char *)dst = *(char *)src;
			dst--;
			src--;
		}
	}
	else
	{
		while (len-- > 0)
		{
			*(char *)dst = *(char *)src;
			dst++;
			src++;
		}
	}
	return (tmp);
}
