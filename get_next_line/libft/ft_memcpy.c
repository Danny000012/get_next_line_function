/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:34:25 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/30 00:28:28 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			i;

	str = (unsigned char *)dst;
	str1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dst);
}
