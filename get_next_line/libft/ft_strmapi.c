/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 20:15:44 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/30 02:03:40 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	int		i;

	if (!s)
		return (NULL);
	new_string = ft_strnew(ft_strlen(s));
	if (!new_string)
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(new_string + i) = f(i, *(s + i));
	return (new_string);
}
