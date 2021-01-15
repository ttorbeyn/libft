/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:17:49 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/13 00:20:22 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if ((!lst) || (!del) || (!(*lst)))
		return ;
	current = *lst;
	while (current != 0)
	{
		(*del)(current->content);
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*lst = 0;
}