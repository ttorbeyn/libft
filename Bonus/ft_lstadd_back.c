#include "../srcs/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	while (*alst)
		*alst = *alst->next;
	*alst->next = new;
	new->next = 0;
}
