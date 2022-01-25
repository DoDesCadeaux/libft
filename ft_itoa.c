/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:19:45 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/14 14:19:46 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	ft_is_negative(int n, int *sign)
{
	if (n < 0)
	{
		*sign = -1;
		n = -n;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_intlen(n) + 1;
	sign = 1;
	n = ft_is_negative(n, &sign);
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	str[--size] = '\0';
	while (size > 0)
	{
		str[--size] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
