# include <stdio.h>
# include <string.h>
int main( )
{
char string1[ ] = "Jerry" ;
char string2[ ] = "Ferry" ;
int i, j, k ;
    long int l;
i = strcmp ( string1, "Jerry" ) ;
j = strcmp ( string1, string2 ) ;
k = strcmp ( string1, "Jerry boy" ) ;
    l=strlen(string1);
    printf ( "%d %d %d %ld\n", i, j, k ,l) ;
return 0 ;
}
