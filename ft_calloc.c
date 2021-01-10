#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char 	*new;
	size_t 	i;

	i = 0;
	if (!(new = malloc(size * count)))
		return(NULL);
	while(i < (count * size))
	{
		new[i] = 0;
		i++;
	}
	return(new);
}

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define INT_NUMBER 10

int main() {

	int i;
	int * pointer = (int *) ft_calloc( INT_NUMBER, sizeof(int) );

	/* Un petit test sur le bon fonctionnement de calloc */
	assert( pointer != NULL );

	/* Le dernier élément du tableau ne sera pas affecté par la */
	/* boucle mais n'oubliez pas que calloc initialise de toute */
	/* façon à 0 chaque octet. */
	for ( i=0; i<INT_NUMBER-1; i++ ) {
		pointer[i] = i;
	}

	/* On affiche le contenu du tableau d'entier */
	/* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
	for (i=0; i<(INT_NUMBER); i++ ) {
		printf( "%d ", pointer[i] );
	}
	printf( "\n" );

	/* On libère le bloc de mémoire alloué dynamiquement */
	free( pointer );

	return 0;
}