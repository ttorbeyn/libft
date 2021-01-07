#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = c;
		i++;
	}
	return (b);
}

#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "almost every programmer should know memset!";
	memset (str,'-',6);
	puts (str);
	char str2[] = "almost every programmer should know memset!";
	ft_memset (str2,'-',6);
	puts (str2);
	return 0;
}