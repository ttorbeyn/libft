/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:44:03 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/12 18:44:04 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while ((i < n) && (((unsigned char*)src)[i] != ((unsigned char)c)))
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	if (((unsigned char*)src)[i] == ((unsigned char)c))
		return (&(((unsigned char*)dst)[i + 1]));
	return (NULL);
}

#include <stdio.h>

int main()
{
	const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
	size_t length = strlen( text );

	// On essaye de trouver la première phrase dans le texte.
	char firstSentence[ length ];
	char * res = ft_memccpy( firstSentence, text, '.', length );

	// On affiche le resultat.
	if ( res != NULL ) {
		printf( "Une phrase entière a été trouvée.\n" );
		printf( "\t%s\n", res );
	} else {
		printf( "Aucune phrase entière trouvée.\n" );
	}
	return EXIT_SUCCESS;
}