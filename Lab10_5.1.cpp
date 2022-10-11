#include <stdio.h>
#include <string.h>

int main () {
	char name[ 20 ] ;
	printf( "---| input your name : " ) ;
	gets( name ) ;
	printf("\n---| your reverse name is : " ) ;
	int s = strlen( name ) ;
	int i = s ;
	while( i >= 0 ) {
		printf( "%c", name[i] ) ;
		i-- ;
	}//end while
	return 0 ;
}//end function
