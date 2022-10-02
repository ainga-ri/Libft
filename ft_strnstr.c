/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:46:38 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/14 15:45:40 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(ft_strlen(needle)))
		return ((char *)haystack);
	while (haystack[j] && j < len && ft_strlen(haystack) > 0 && len > 0)
	{
		while ((haystack[j + i]) && (needle[i])
			&& (haystack[j + i] == needle[i]) && ((j + i) < len))
			i++;
		if (!(needle[i]))
			return ((char *)(haystack + j));
		else
			i = 0;
		j++;
	}
	return (0);
}
