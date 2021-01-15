#include "includes/libft.h"
#include <stdio.h>

static size_t	ft_check(char const *s1, char const *set, size_t i)
{
	size_t	j;
	int		sign;

	sign = 0;
	if (i == 0)
		sign = 1;
	j = 0;
	while ((s1[i] && set[j]) || (i > 0 && set[i]))
	{
		if (s1[i] != set[j])
			j++;
		else
		{
			if (sign)
				i++;
			else
				i--;
			j = 0;
		}
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	len;
	int		x;
	size_t	a;

	if ((!s1) || (!set))
		return (NULL);
	a = 0;
	i = ft_check(s1, set, a);
	len = ft_check(s1, set, (ft_strlen(s1) - 1));
	printf("%lu ----- %lu\n", i, len);
	if (len > i)
		a = len - i;
	else
		a = len;
	printf("%lu\n", a);
	if (!(new = malloc((sizeof(char)) * (a + 2))))
		return (NULL);
	x = 0;
	while (s1[i] && i <= len)
	{
		new[x] = s1[i];
		x++;
		i++;
	}
	new[x] = '\0';
	return (new);
}

int main()
{
	char	*s1;
	char	*s2;

	s1 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
	s2 = " \n\t";
	printf("%s\n", ft_strtrim(s1, s2));
	return (0);
}

