/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:24:17 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/09 17:24:25 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n *= -1;
	}
	if (long_n >= 10)
	{
		ft_putnbr_fd(long_n / 10, fd);
		ft_putnbr_fd(long_n % 10, fd);
	}
	else
		ft_putchar_fd(long_n + '0', fd);
}
