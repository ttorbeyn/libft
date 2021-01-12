#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac < 0)
		return (0);
	int a = strncmp(av[1], av[2], 5);
	int b = ft_strncmp(av[1], av[2], 5);

	printf("GOOD	:	%d\n", a);
	printf("MINE	:	%d\n", b);
}