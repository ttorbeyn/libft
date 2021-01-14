/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:54:27 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/13 00:16:46 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

static	int	ft_verifyll(unsigned long long int a, int sign)
{
	unsigned long long	min;
	unsigned long long	max;

	min = 9223372036854775808U;
	max = 9223372036854775807U;
	if (a > max && sign > 0)
		return (-1);
	if (a > min && sign < 0)
		return (0);
	return (2);
}

int			ft_atoi(const char *str)
{
	int					i;
	unsigned long long	y;
	int					sign;

	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	y = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		y *= 10;
		y += str[i] - '0';
		i++;
	}
	if (ft_verifyll(y, sign) != 2)
		return (ft_verifyll(y, sign));
	return (y * sign);
}
