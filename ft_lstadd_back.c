/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:47:16 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/13 00:16:46 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new);
/*{
	while (*alst)
		*alst = *alst->next;
	*alst->next = new;
	new->next = 0;
}*/
