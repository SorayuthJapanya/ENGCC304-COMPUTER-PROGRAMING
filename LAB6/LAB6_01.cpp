#include <stdio.h>

int main () {
	
	int i   ;
	int j   ;
	int num ;
	
	printf( "Input your line : " ) ;
	scanf( "%d",&num ) ;
	for ( i = 1 ; i <= num ; i++ ) {
		for ( j = 1 ; j <= i ; j++ ) {
			printf( "*" ) ;
		}// end for j
		printf( "\n" ) ;	
	}//end for i		
	return 0 ;
}//end function
