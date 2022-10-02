/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:17:04 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/06/10 16:54:26 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getsize(int n)
{
	int	aux;
	int	size;

	size = 1;
	aux = n;
	if (aux < 0)
	{
		if (n == -2147483648)
			aux = n + 1;
		aux = -n;
		size++;
	}
	while (aux / 10 != 0)
	{
		aux = aux / 10;
		size++;
	}
	return (size);
}

void	ft_setbounds(char *s, int *aux, int n, int *size)
{
	s[*size] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
			*aux = -n - 1;
		else
			*aux = -n;
		s[0] = '-';
		*size = *size - 1;
	}
}

char	*ft_itoa(int n)
{	
	int		i;
	int		size;
	int		aux;
	char	*s;

	i = 0;
	size = ft_getsize(n);
	aux = n;
	s = (char *) malloc(sizeof(char) * (size + 1));
	if (!s)
		return (0);
	ft_setbounds(s, &aux, n, &size);
	while (i < size)
	{
		if (n == -2147483648 && i == 0)
			s[size - i] = 48 + (aux % 10) + 1;
		else if (n < 0)
			s[size - i] = 48 + (aux % 10);
		else
			s[size - i - 1] = 48 + (aux % 10);
		aux = aux / 10;
		i++;
	}
	return (s);
}
