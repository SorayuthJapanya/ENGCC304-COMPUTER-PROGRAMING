#include <stdio.h>

int main () {
	
	int i   ;
	int j   ;
	int num ; // Number
	int sp  ; // Space 
	
	printf( "Input your line : " ) ;
	scanf( "%d", &num ) ;
	if ( num % 2 == 0 ) {
		for( i = 0 ; i < num ; i++ ) {
			for( sp = 0 ; sp <= ( num - i ) ; sp++ ) {
				printf( " " ) ;
			}//end for sp
			for( j = 0 ; j <= i ; j++ ) {
				printf( "* " ) ;	
			}//end for j 
		printf( "\n" ) ;
		}//end for i 
	}//end if
	else if ( num % 2 == 1 ) {
		for( i = 0 ; i < num ; i++ ) {
			for( sp = 0 ; sp <= i ; sp++ ) {
				printf( " " ) ;
			}//end for sp
			for( j = 1 ; j <= ( num - i ) ; j++ ) {
				printf( "* " ) ;
			}//end for j
		printf( "\n" ) ;	
		}//end for i
	}//end else if
	return 0 ;
}// end funtion

