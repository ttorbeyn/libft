void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
	size_t length = strlen( text );

	// On essaye de trouver la première phrase dans le texte.
	char firstSentence[ length ];
	char * res = memccpy( firstSentence, text, '.', length );

	// On affiche le resultat.
	if ( res != NULL ) {
		printf( "Une phrase entière a été trouvée.\n" );
		printf( "\t%s\n", firstSentence );
	} else {
		printf( "Aucune phrase entière trouvée.\n" );
	}
	return EXIT_SUCCESS;
}