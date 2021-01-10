#include "libft.h"

int ft_wordcount(char const *s, char c)
{
	size_t i;
	size_t x;

	i = 0;
	x = 0;
	if (s[i] != c)
		x++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			x++;
		i++;
	}
	return(x);
}

int	ft_wordlen(char const *s, char c, size_t x)
{
	size_t i;

	i = 0;
	while (s[x] && s[x] == c)
		x++;
	while (s[x] && s[x] != c)
	{
		x++;
		i++;
	}
	return(i);
}

char **ft_split(char const *s, char c)
{
	char 	**new;
	size_t 	x;
	size_t 	i;
	size_t 	j;

	if (!(new = malloc((sizeof(char **)) * (ft_wordcount(s, c) + 1))))
		return(NULL);
	i = 0;
	x = 0;
	while (i < (ft_wordcount(s, c)))
	{
		j = 0;
		if (!(new[i] = malloc((sizeof(char *) * (ft_wordlen(s, c, x) + 1)))))
			return(NULL);
		while (s[x] && s[x] == c)
			x++;
		while (s[x] && s[x] != c)
			new[i][j++] = s[x++];
		new[i][j] = '\0';
		i++;
	}
	new[x] = 0;
	return(new);
}

int main (int ac, char **av)
{
	char **new;
	size_t x;

	x = 0;
	new = malloc(100);
	new = ft_split(av[1], '-');
	while(x < ft_wordcount(av[1], '-'))
	{
		printf("%s\n", new[x]);
		x++;
	}
	return(0);
}