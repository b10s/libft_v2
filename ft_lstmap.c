/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:22:28 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/24 21:54:20 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

t_list *
	ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
	t_list	*res;
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_front(&res, new);
		lst = lst->next;
	}
	return (res);
}
