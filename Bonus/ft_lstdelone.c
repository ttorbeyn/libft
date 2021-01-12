#include "../includes/libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*ptr;

	*ptr = lst
	(*del)(lst);
	free(lst);
}
