#include "../srcs/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*begin;

	if (!(begin = malloc(sizeof(t_list))))
		return (NULL);
	//if (begin == 0)
	//{
	//	return (0);
	//}
	begin->content = content;
	begin->next = 0;
	return (begin);
}