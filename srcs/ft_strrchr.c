#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	while(len > 0)
	{
		if (((unsigned char*)s)[len] == c)
			return(&((void*)s)[len]);
		len--;
	}
	return(NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	// Le nom du fichier d'origine
	const char * originalFilename = "folder/image.jpg";

	// On prépare le nom du fichier de destination
	size_t size = strlen( originalFilename ) + 1;   // +1 pour le zéro terminal
	char * destinationFilename = (char *) malloc( size );
	strcpy( destinationFilename, originalFilename );

	// Et on y remplace l'extension du fichier par l'extension .png
	char * lastDotPos = strrchr( destinationFilename, '.' );
	strcpy( lastDotPos, ".png" );

	// On affiche les deux noms de fichiers
	puts( originalFilename );
	puts( destinationFilename );

	return EXIT_SUCCESS;
}