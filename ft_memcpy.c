/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:44:45 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/12 18:44:49 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == '\0' && src == '\0')
		return (dst);
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dst);
}

{
	size_t i;
	i = 0;
	while (i < n)
	{
		if (((unsigned char*)src)[i] != ((unsigned char)c))
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
		else
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			return (&dst[i + 1]);
		}
	}
	return (0);
}