#include "includes/libft.h"

static t_list *ft_freeall(t_list *lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if ((!lst) || (!del))
		return (NULL);
	current = lst;
	while (current != 0)
	{
		(*del)(current->content);
		tmp = current;
		current = current->next;
		free(tmp);
	}
	return (lst);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*bgn;

	while (lst != 0)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
			return (ft_freeall(bgn, (*del)));
		ft_lstadd_back(&bgn, new);
		lst = lst->next;
	}
	return (new);
}

//if (!(new = malloc(sizeof(t_list))))
//return (ft_freeall(bgn, (*del)));