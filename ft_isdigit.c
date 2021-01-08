#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char buffer[80];
	printf( "Enter your text : " );
	scanf( "%[^\n]", buffer );

	bool isCorrect = true;
	size_t length = strlen( buffer );
	for( int i=0; i<length; i++ ) {
		if ( ! ft_isdigit( buffer[i] ) ) {
			isCorrect = false;
		}
	}

	if ( isCorrect ) {
		printf( "Your text (%s) is a digit\n", buffer );
	} else {
		printf( "Your text (%s) is not a digit\n", buffer );
	}

	return EXIT_SUCCESS;
}