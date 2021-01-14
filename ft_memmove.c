/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:44:55 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/12 18:44:56 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*mydst;
	unsigned char	*mysrc;

	mydst = (unsigned char *)dst;
	mysrc = (unsigned char *)src;
	i = 0;
	if (mysrc == 0 && mydst == 0)
		return (NULL);
	if (mysrc < mydst)
	{
		i = len;
		while (i > 0)
		{
			(mydst[i - 1] = (mysrc)[i - 1]);
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			(mydst[i] = (mysrc)[i]);
			i++;
		}
	}
	return (dst);
}
