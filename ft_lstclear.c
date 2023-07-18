/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:01:49 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/18 23:14:30 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

void
	ft_lstclear(t_list **lst, void (*del)(void *)) {
	t_list	*l;
	t_list	*tmp;

	l = *lst;
	if (l == NULL)
		return ;
	while (l->next != NULL)
	{
		del(l->content);
		tmp = l;
		l = l->next;
		free(tmp);
	}
	del(l->content);
	free(l);
	*lst = NULL;
	return ;
}
