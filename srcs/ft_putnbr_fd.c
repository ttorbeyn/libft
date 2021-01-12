#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int n2;

	if (n < 0)
	{
		n2 = -n;
		ft_putchar_fd('-', fd);
	}
	else
		n2 = n;
	if (n2 > 9)
	{
		ft_putnbr_fd((n2 / 10), fd);
		ft_putchar_fd(((n2 % 10) + '0'), fd);
	}
	else
		ft_putchar_fd((n2 + '0'), fd);
}

int		main(int ac, char **av)
{
	if (ac < 0)
		return (0);
	ft_putnbr_fd(atoi(av[1]), 1);
	return (0);
}