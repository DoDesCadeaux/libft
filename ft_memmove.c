/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:51:00 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/04 18:51:03 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*temp_src;
	char	*temp_dst;

	i = 0;
	temp_src = (char *)src;
	temp_dst = (char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (i < len)
		{
			temp_dst[len - 1] = temp_src[len - 1];
			len--;
		}
	}
	else
	{
		i = -1;
		while (++i < len)
			temp_dst[i] = temp_src[i];
	}
	return (dst);
}
