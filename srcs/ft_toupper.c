#include "../includes/libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return(c);
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strtoupper( char * dest, const char * src ) {
	char * result = dest;
	while( *dest++ = ft_toupper( *src++ ) );
	return result;
}

int main() {

	char * input = "Diego De La Vega";
	char result[17];

	printf( "Result: %s\n", strtoupper( result, input ) );

	return EXIT_SUCCESS;
}

