/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:34:45 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/09 14:34:48 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(size_t size, size_t len, unsigned int start)
{
	if (size < start)
		len = 0;
	else if (start + len >= size)
		len = size - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	y;
	char	*str;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	len = ft_len(size, len, start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	y = 0;
	while (s[i])
	{
		if (y < len && i >= start)
		{
			str[y] = s[i];
			y++;
		}
		i++;
	}
	str[y] = '\0';
	return (str);
}
