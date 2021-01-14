/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:48:22 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/12 18:48:23 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
/*
static int	ft_checksetstart(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == set[i])
		i++;
	if (i == ft_strlen(set))
		return (i);
	else
		return (0);
}

static int	ft_checksetend(char const *s1, char const *set)
{
	int	lens1;
	int	lenset;

	lens1 = ft_strlen(s1);
	lenset = ft_strlen(set);
	while (lens1 > 0 && s1[lens1] == set[lenset] && lenset > 0)
	{
		lenset--;
		lens1--;
	}
	if (lenset == 0)
		return (ft_strlen(set));
	else
		return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;

	if ((!s1) || (!set))
		return (NULL);
	if (!(new = malloc((sizeof(char)) * ft_strlen(s1))))
		return(NULL);
	i = ft_checksetstart(s1, set);
	j = 0;
	while (s1[i])
	{
		new[j] = s1[i];
		i++;
		j++;
	}
	if (ft_checksetend(s1, set))
		new[(j - ft_checksetend(s1, set))] = '\0';
	else
		new[j] = '\0';
	return (new);
}
*/



char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		x;

	if ((!s1) || (!set))
		return (NULL);
	if (!(new = malloc((sizeof(char)) * ft_strlen(s1))))
		return(NULL);
	i = 0;
	j = 0;
	while (s1[i] == set[j])
		i++;
	x = 0;
	while (s1[i])
	{
		new[x] = s1[i];
		i++;
		x++;
	}
	new[i] = '\0';
	return (new);
}


#include <stdio.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Pas assez d'arguments gros con\n");
		return (0);
	}
	printf("%s\n", ft_strtrim(av[1], av[2]));
}
