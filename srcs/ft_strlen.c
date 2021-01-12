#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char * firstName = "John";
	char * lastName = "Doe";
	char * fullName;
	size_t fullSize;

	/* The last +1 is for the last nul ASCII code for the string */
	fullSize = ft_strlen( firstName ) + 1 +  ft_strlen( lastName ) + 1;

	/* Memory allocation and copy */
	fullName = (char *) malloc( fullSize );
	strcpy( fullName, firstName );
	strcat( fullName, " " );
	strcat( fullName, lastName );

	printf( "Full name is: %s\n", fullName );

	free( fullName );

	return 0;
}