/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:43:17 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/12 18:43:22 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_revstr(const char *s)
{
	char	*new;
	size_t	len;
	size_t	i;

	len = strlen(s);
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len > 0)
	{
		new[i] = s[len - 1];
		i++;
		len--;
	}
	new[i] = '\0';
	return (new);
}

int		ft_countdigit(int x)
{
	size_t	c;

	c = 0;
	if (x == 0)
		c = 1;
	while (x != 0)
	{
		x = x / 10;
		c++;
	}
	return (c);
}

int		ft_isnegative(int n)
{
	int sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

char	*ft_itoa(int n)
{
	char			*new;
	int				i;
	int				c;
	unsigned int	n2;

	c = ft_countdigit(n);
	if (n < 0)
		(n2 = -n);
	else
		(n2 = n);
	if (!(new = malloc((sizeof(char) * (c + 2)))))
		return (NULL);
	i = 0;
	while (i < c)
	{
		new[i++] = (n2 % 10) + '0';
		n2 = n2 / 10;
	}
	if (ft_isnegative(n) == -1)
		new[i++] = '-';
	new[i] = '\0';
	return (ft_revstr(new));
}
