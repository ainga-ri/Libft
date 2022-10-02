/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:55:57 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/29 13:28:47 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*nstr;
	size_t		i;

	i = 0;
	nstr = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!nstr)
		return (0);
	while (i < ft_strlen(s1))
	{
		nstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		nstr[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	nstr[ft_strlen(s1) + i] = '\0';
	return (nstr);
}
