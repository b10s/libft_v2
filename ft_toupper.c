/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:18:01 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/03 18:28:54 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_toupper(int c) {
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
