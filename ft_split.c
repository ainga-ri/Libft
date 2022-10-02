/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:23:04 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/06/02 00:31:00 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static _Bool	ft_protect(char **arr, int size)
{
	if (!arr[size])
	{
		while (size > 0)
		{
			free(arr[size - 1]);
			size--;
		}
		free(arr);
		return (0);
	}
	return (1);
}

static char	**ft_create(char const *s, char c)
{
	int		i;
	int		size;
	char	**matrix;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			size++;
		i++;
	}
	matrix = (char **) malloc(sizeof(char *) * (size + 1));
	if (!matrix)
		return (0);
	matrix[size] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		size;
	int		start;
	char	**arr;

	i = 0;
	start = 0;
	size = 0;
	arr = ft_create(s, c);
	if (!arr)
		return (0);
	while (i < (int)ft_strlen(s))
	{
		if (s[i] == c)
			start = i + 1;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{	
			arr[size] = ft_substr(s, start, i - start + 1);
			if (!ft_protect(arr, size))
				return (0);
			size++;
		}
		i++;
	}
	return (arr);
}
