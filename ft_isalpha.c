#include "libft.h"

int ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	printf( "Enter your last name : " );
	scanf( "%[^\n]", buffer );

	bool isCorrect = true;
	size_t length = strlen( buffer );
	for( int i=0; i<length; i++ ) {
		if ( ft_isalpha( buffer[i] ) == false && isblank( buffer[i] ) == false ) {
			isCorrect = false;
		}
	}

	if ( isCorrect ) {
		printf( "Your last name (%s) is correct\n", buffer );
	} else {
		printf( "Your last name (%s) is not correct\n", buffer );
	}

	return EXIT_SUCCESS;
}