/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:28:32 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/04 18:50:17 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	int				j;
	unsigned char	*tempsrc;
	unsigned char	*tempdst;

	i = 0;
	j = i;
	tempsrc = (unsigned char *)src;
	tempdst = (unsigned char *)dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n > 0)
	{
		tempdst[i++] = tempsrc[j++];
		n--;
	}
	return (dst);
}
