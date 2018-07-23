/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 03:43:11 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/30 03:53:43 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *def;

	def = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			def = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (def);
}
