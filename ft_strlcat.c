/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:21:24 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/19 15:56:27 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	a;
	unsigned int	b;

	a = ft_strlen(dst);
	b = ft_strlen(dst);
	if (ft_strlen(dst) > dstsize || dstsize == 0)
		return (dstsize + ft_strlen(src));
	else
	{
		while (*src != '\0')
		{
			if (a < (dstsize - 1))
			{
				dst[a] = *src;
				a++;
			}
			b++;
			src++;
		}
		dst[a] = '\0';
	}
	return (b);
}
