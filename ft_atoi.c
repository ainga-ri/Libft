/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:56:36 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/05/28 11:42:52 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	real_num;
	int	sign;

	sign = 1;
	i = 0;
	real_num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		if ((str[i] == '-' || str[i] == '+') && (str[i + 1] == '\t'
				|| str[i + 1] == '\n' || str[i + 1] == '\v'
				|| str[i + 1] == '\r' || str[i + 1] == ' '
				|| str[i + 1] == '-' || str[i + 1] == '+'))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		real_num = real_num * 10 + (str[i] - 48);
		i++;
	}
	return (sign * real_num);
}
