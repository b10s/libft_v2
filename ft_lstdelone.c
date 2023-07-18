/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:58:16 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/18 23:00:25 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

void
	ft_lstdelone(t_list *lst, void (*del)(void *)) {
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
	return ;
}
