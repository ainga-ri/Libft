/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 10:25:37 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/28 11:03:36 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		c_mem;

	c_mem = 0;
	while (s1[c_mem])
		c_mem++;
	s2 = (char *) malloc(c_mem * sizeof(char) + 1);
	if (s2 == NULL)
		return (0);
	c_mem = 0;
	while (s1[c_mem])
	{
		s2[c_mem] = ((char *)s1)[c_mem];
		c_mem++;
	}
	s2[c_mem] = '\0';
	return (s2);
}
