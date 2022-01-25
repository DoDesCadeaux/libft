/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:15:55 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/05 16:15:56 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	src_size;
	size_t	dest_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dst);
	if (len < dest_size)
		return (src_size + len);
	else
	{
		dst += dest_size;
		ft_strlcpy(dst, src, len - dest_size);
		return (dest_size + src_size);
	}
}
