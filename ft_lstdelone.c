/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:18:05 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/13 00:18:09 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*));
/*{
	t_list	*ptr;

	*ptr = lst
	(*del)(lst);
	free(lst);
}*/
