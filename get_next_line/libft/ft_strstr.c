/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 15:13:04 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/31 14:42:24 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	index;

	if (!*s2)
	{
		return ((char *)s1);
	}
	while (*s1)
	{
		index = 0;
		while (s1[index] == s2[index])
		{
			if (!s2[++index])
			{
				return ((char *)s1);
			}
		}
		s1++;
	}
	return (0);
}
