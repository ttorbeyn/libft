#include "libft.h"

char *ft_itoa(int n)
{
	int 	c;
	int 	sign;
	int		i;
	char	*new;
	size_t	n2;

	n2 = n;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n2 = n2 * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	i = 0;
	if (!(new = malloc((sizeof(char) * (c + 1)))))
		return(NULL);
	while (i < c)
	{
		new[i] = (n2 % 10) + '0';
		n2 = n2 / 10;
		i++;
	}
	new[i] = '\0';
	return(new);
}

#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(-2147483648));
}
