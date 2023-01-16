/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:44:12 by lyie-xua          #+#    #+#             */
/*   Updated: 2023/01/16 14:44:13 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (d < size)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[d + i] = src[i];
			i++;
		}
		dest[d + i] = '\0';
		return (d + s);
	}
	return (s + size);
}
