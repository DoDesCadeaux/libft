/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:25:15 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/13 16:25:17 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		p = (char *)&s[i];
	return (p);
}
