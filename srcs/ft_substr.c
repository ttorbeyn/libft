#include "../includes/libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;
	size_t i;

	i = 0;
	if (!(new = malloc(sizeof(char *) * len)))
		return(NULL);
	while (s[start] && len > 0)
	{
		new[i] = s[start];
		start++;
		len--;
	}
	return(new);
}

