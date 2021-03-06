/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dienasci <dienasci@student.42sp.org.br >   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:04:38 by dienasci          #+#    #+#             */
/*   Updated: 2022/02/17 22:23:16 by dienasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			index;

	if (!dest && !src)
		return (NULL);
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	index = 0;
	while (index < n)
	{
		cdest[index] = csrc[index];
		index++;
	}
	return (dest);
}
