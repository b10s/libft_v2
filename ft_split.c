/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:46:29 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/26 22:32:40 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

void	get_arr_len(char const *s, char c, size_t res[2]);

char **
	ft_split(char const *s, char c) {
	char	**res;
	size_t	wb[2];
	size_t	w_idx;
	char	*data_ptr;

	if (s == NULL)
		return (NULL);
	get_arr_len(s, c, wb);
	res = malloc((wb[0] + 1) * sizeof(char *) + (wb[1] + wb[0]) * sizeof(char));
	if (res == NULL)
		return (NULL);
	data_ptr = (char *)res + (wb[0] + 1) * sizeof(char *);
	w_idx = 0;
	while (*s != '\0' && w_idx < wb[0])
	{
		res[w_idx++] = data_ptr;
		while (*s == (char)c)
			s++;
		while (*s != (char)c)
			*data_ptr++ = *s++;
		*data_ptr++ = '\0';
	}
	res[w_idx] = NULL;
	return (res);
}

void
	get_arr_len(char const *s, char c, size_t res[2]) {
	size_t	wcnt;
	size_t	bcnt;
	short	wflag;

	wcnt = 0;
	bcnt = 0;
	wflag = 0;
	while (*s != '\0')
	{
		if (*s == c)
			wflag = 0;
		else
		{
			bcnt++;
			if (wflag == 0)
				wcnt++;
			wflag = 1;
		}
		s++;
	}
	res[0] = wcnt;
	res[1] = bcnt;
}
