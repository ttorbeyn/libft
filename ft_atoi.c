#include "includes/libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int y;
	int sign;

	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	y = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		y *= 10;
		y += str[i] - '0';
		i++;
	}
	return(y * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac < 0)
		return (0);
	printf("%d\n", atoi(av[1]));
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}
