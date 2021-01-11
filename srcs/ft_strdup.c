#include "../includes/libft.h"

char *ft_strdup(const char *s1)
{
	size_t len;
	size_t i;
	char *new;

	i = 0;
	len = strlen(s1);
	if (!(new = malloc(sizeof(char) * len)))
		return(NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return(new);
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	const char * original = "The original string.";

	// On duplique la chaîne de caractères initiale.
	char * copy = ft_strdup( original );

	// On passe chaque lettre en majuscule.
	char * ptr = copy;
	while( *ptr != '\0' ) {
		*ptr = toupper( *ptr );
		ptr++;
	}

	// On affiche la chaîne finale
	printf( "%s\n", copy );

	// Sans oublier de libérer l'espace mémoire au final.
	free( copy );

	return EXIT_SUCCESS;
}