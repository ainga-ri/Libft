/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:07:34 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/29 13:26:15 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	while ((i != j) && ft_strchr(set, s1[i]))
		i++;
	while ((i != j) && ft_strrchr(set, s1[j - 1]))
		j--;
	s2 = (char *) malloc(j - i + 1);
	if (!s2)
		return (0);
	*s2 = '\0';
	if (i < j)
		ft_strlcpy(s2, s1 + i, j - i + 1);
	return (s2);
}
