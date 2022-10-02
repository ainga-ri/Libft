/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:38:35 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/11 14:55:27 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen(s);
	if ((char) c == '\0')
		return ((char *)(s + len));
	if (len != 0)
	{
		while (len >= 0)
		{
			if (*(s + len) == (char)c)
				return ((char *)(s + len));
			len--;
		}
	}
	return (0);
}
