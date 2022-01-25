/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:16:22 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/15 13:16:23 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	if (*lst)
	{
		while (*lst)
		{
			l = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(l, del);
		}
	}
}
