/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:48:16 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/12 18:48:17 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	while(len > 0)
	{
		if (((unsigned char*)s)[len] == c)
			return(&((void*)s)[len]);
		len--;
	}
	return(NULL);
}
