#include "../includes/libft.h"

char *ft_revstr(const char *s)
{
	char 	*new;
	size_t	len;
	size_t	i;

	len = strlen(s);
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return(NULL);
	i = 0;
	while (len > 0)
	{
		new[i] = s[len - 1];
		i++;
		len--;
	}
	new[i] = '\0';
	return(new);
}

int		ft_countdigit(int n)
{
	size_t	c;

	c = 0;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return(c);
}

int 	ft_isnegative(int n)
{
	int sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return(sign);
}

char *ft_itoa(int n)
{
	char	*new;
	int		i;
	int 	c;
	int 	sign;

	c = ft_countdigit(n);
	sign = ft_isnegative(n);
	if (!(new = malloc((sizeof(char) * (c + 2)))))
		return(NULL);
	i = 0;
	while (i < c)
	{
		new[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == -1)
		new[i++] = '-';
	new[i] = '\0';
	return(ft_revstr(new));
}

#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}
