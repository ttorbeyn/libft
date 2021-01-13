#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#define ELEMENT_COUNT 10
#define INT_NUMBER 10

//ft_atoi.c
	int main(int ac, char **av)
	{
		if (ac < 0)
			return (0);
		printf("%d\n", atoi(av[1]));
		printf("%d\n", //ft_atoi(av[1]));
		return (0);
	}
//ft_bzero.c
//ft_calloc.c
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
//ft_isalnum.c
	int main() {

	char buffer[80];
	printf( "Enter your login (only alpha-numeric characters) : " );
	scanf( "%s", buffer );

	bool isCorrect = true;
	size_t length = strlen( buffer );
	for( size_t i=0; i<length; i++ ) {
		if ( ft_isalnum( buffer[i] ) == false ) {
			isCorrect = false;
		}
	}

	if ( isCorrect ) {
		printf( "Your login is correct\n" );
	} else {
		printf( "Your login is not correct\n" );
	}
	return EXIT_SUCCESS;
}
//ft_isalpha.c
	int main() {

	char buffer[80];
	printf( "Enter your last name : " );
	scanf( "%[^\n]", buffer );

	bool isCorrect = true;
	size_t length = strlen( buffer );
	for( size_t i=0; i<length; i++ ) {
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
//ft_isascii.c
//ft_isdigit.c
	int main() {

	char buffer[80];
	printf( "Enter your text : " );
	scanf( "%[^\n]", buffer );

	bool isCorrect = true;
	size_t length = strlen( buffer );
	for( size_t i=0; i<length; i++ ) {
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
//ft_isprint.c
//ft_itoa.c
	int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
}
//ft_lstadd_back.c
//ft_lstadd_front.c
//ft_lstclear.c
//ft_lstdelone.c
//ft_lstiter.c
//ft_lstlast.c
//ft_lstmap.c
//ft_lstnew.c
//ft_lstsize.c
//ft_memccpy.c
	int main()
{
	const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
	size_t length = strlen( text );

	// On essaye de trouver la première phrase dans le texte.
	char firstSentence[ length ];
	char * res = ft_memccpy( firstSentence, text, '.', length );

	// On affiche le resultat.
	if ( res != NULL ) {
		printf( "Une phrase entière a été trouvée.\n" );
		printf( "\t%s\n", firstSentence );
	} else {
		printf( "Aucune phrase entière trouvée.\n" );
	}
	return EXIT_SUCCESS;
}
//ft_memchr.c
	int main() {

	char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	const unsigned int size = 10;

	// On recherche une valeur inhéxistante :
	void * found = ft_memchr( data, 57, size );
	printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

	// On recherche une valeur existante :
	found = ft_memchr( data, 50, size );
	printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
	if ( found != NULL ) {
		printf( "La valeur à la position calculée est %d\n", *((char *) found) );
	}

	return EXIT_SUCCESS;
}
//ft_memcmp.c
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
//ft_memcpy.c
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
//ft_memmove.c
	int main() {

	// On crée une zone de mémoire de 10 entiers et contenant
	// que neuf valeurs. La dixième est non utilisée (0).
	int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

	// On affiche le contenu de la collection
	for( int i=0; i<ELEMENT_COUNT; i++ ) {
		printf( "%d ", data[i] );
	}
	puts( "" );  // Un retour à la ligne

	// On décale les éléménts dans la collection ...
	void * source = (void *) data;
	void * destination = (void *) ( data + 1 );
	size_t size = ELEMENT_COUNT * sizeof( int );
	ft_memmove( destination, source, size );

	// ... pour y insérer une nouvelle valeur en tête
	data[0] = 10;

	// On affiche le contenu de la collection
	for( int i=0; i<ELEMENT_COUNT; i++ ) {
		printf( "%d ", data[i] );
	}
	puts( "" );  // Un retour à la ligne

	return EXIT_SUCCESS;
}
//ft_memset.c
	int	main ()
{
	char str[] = "almost every programmer should know memset!";
	memset (str,'+',10);
	puts (str);
	char str2[] = "almost every programmer should know memset!";
	ft_memset (str2,'+',10);
	puts (str2);
	return 0;
}
//ft_putchar_fd.c
	int main()
{
	ft_putchar_fd('h', 2);
}
//ft_putendl_fd.c
//ft_putnbr_fd.c
	int	main(int ac, char **av)
{
	if (ac < 0)
		return (0);
	ft_putnbr_fd(atoi(av[1]), 1);
	return (0);
}
//ft_putstr_fd.c
//ft_split.c
	int main (int ac, char **av)
{
	char **new;
	int x;

	if (ac < 0)
		return (0);
	x = 0;
	new = malloc(100);
	new = ft_split(av[1], '-');
	while(x < ft_wordcount(av[1], '-'))
	{
		printf("%s\n", new[x]);
		x++;
	}
	return(0);
}
	int main()
{
	char *s = "      split       this for   me  !       ";
	int x;

	x = 0;
	char **result = ft_split(s, ' ');
	while (x < ft_wordcount(s, ' '))
	{
		printf("%s\n", result[x]);
		x++;
	}
	return (0);
}
//ft_strchr.c
	int main() {

	const char * source = "The C Language";
	char * destination;
	char * pointer = "";
	int length = strlen( source );

	/* We clone the inital string */
	destination = (char *) malloc( sizeof( char) * (length+1) );
	strcpy( destination, source );

	/* We replace all 'a' characters */
	while (pointer == ft_strchr(destination, 'a')) {
		*pointer = 'A';
	}

	/* Display result : The C LAnguAge */
	printf( "Result : %s\n", destination );

	/* Release dynamicly allocated memory */
	free( destination );

	return 0;
}
//ft_strdup.c
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
//ft_strjoin.c
//ft_strlcat.c
//ft_strlcpy.c
//ft_strlen.c
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
//ft_strmapi.c
//ft_strncmp.c
int main(int ac, char **av)
{
	if (ac < 0)
		return (0);
	//int a = strncmp(av[1], av[2], 5);
	//int b = ft_strncmp(av[1], av[2], 5);

	int a = strncmp("abcdef", "abcdefghijklmnop", 6);
	int b = ft_strncmp("abcdef", "abcdefghijklmnop", 6);

	printf("GOOD	:	%d\n", a);
	printf("MINE	:	%d\n", b);
}
//ft_strnstr.c
	int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZ";
	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	printf("%s\n", i1);
	printf("%s\n", i2);
	return (0);
}
//ft_strrchr.c
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
//ft_strtrim.c
//ft_substr.c
	int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error fils de pute\n");
		return (404);
	}
	printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}
//ft_tolower.c
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
//ft_toupper.c
	char * strtoupper( char * dest, const char * src ) {
	char * result = dest;
	while( *dest++ == ft_toupper( *src++ ) );
	return result;
}
	int main() {

	char * input = "Diego De La Vega";
	char result[17];

	printf( "Result: %s\n", strtoupper( result, input ) );

	return EXIT_SUCCESS;
}
