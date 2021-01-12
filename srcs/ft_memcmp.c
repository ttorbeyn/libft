#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	int a;

	i = 0;
	a = 0;
	while (i < n)
	{
		a = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (a)
			return (a);
		i++;
	}
	return(a);
}

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* My memcmp implementation */
int mymemcmp( const void * pointer1, const void * pointer2, size_t size ) {
	unsigned long position;
	for( position=0; position<size; ++position ) {
		int delta = *(unsigned char *)pointer1++ - *(unsigned char *)pointer2++;
		if ( delta ) return delta;
	}
	return 0;
}

int main() {

	int array1 [] = { 54, 85, 20, 63, 21 };
	int array2 [] = { 54, 85, 19, 63, 21 };
	size_t size = sizeof( int ) * 5;

	assert( ft_memcmp( array1, array2, size) == mymemcmp( array1, array2, size) );
	assert( ft_memcmp( array1, array1, size) == mymemcmp( array1, array1, size) );
	assert( ft_memcmp( array2, array1, size) == mymemcmp( array2, array1, size) );

	printf( "Test is ok\n" );

	return 0;
}