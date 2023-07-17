/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:22:47 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/17 19:30:13 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./libft.h"

void
	ft_putstr_fd(char *s, int fd) {
	size_t	len;

	len = ft_strlen(s);
	write(fd, (const void *)s, len);
}
