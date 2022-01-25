/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <dduraku@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:09:10 by dduraku           #+#    #+#             */
/*   Updated: 2022/01/08 18:41:56 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory_alloc;

	memory_alloc = (void *)malloc(count * size);
	if (!memory_alloc)
		return ((void *) NULL);
	ft_memset(memory_alloc, 0, count * size);
	return (memory_alloc);
}
