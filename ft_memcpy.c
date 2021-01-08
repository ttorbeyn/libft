#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
	int array [] = { 54, 85, 20, 63, 21 };
	int * copy = NULL;
	int length = sizeof( int ) * 5;

	/* Memory allocation and copy */
	copy = (int *) malloc( length );
	memcpy( copy, array, length );

	/* Display the copied values */
	for( length=0; length<5; length++ ) {
		printf( "%d ", copy[ length ] );
	}
	printf( "\n" );

	free( copy );

	int array2 [] = { 54, 85, 20, 63, 21 };
	int * copy2 = NULL;
	int length2 = sizeof( int ) * 5;

	/* Memory allocation and copy */
	copy2 = (int *) malloc( length2 );
	ft_memcpy( copy2, array2, length2 );

	/* Display the copied values */
	for( length2=0; length2<5; length2++ ) {
		printf( "%d ", copy2[ length2 ] );
	}
	printf( "\n" );

	free( copy2 );

	return EXIT_SUCCESS;
}