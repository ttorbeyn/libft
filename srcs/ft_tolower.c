#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return(c);
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strtolower( char * dest, const char * src ) {
	char * result = dest;
	while (*dest++ == ft_tolower(*src++));
	return result;
}

int main() {

	char * input = "Diego De La Vega";
	char result[17];

	printf( "Result: %s\n", strtolower( result, input ) );

	return EXIT_SUCCESS;
}