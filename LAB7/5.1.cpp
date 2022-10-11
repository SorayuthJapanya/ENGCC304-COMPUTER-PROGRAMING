#include <stdio.h>

int main() {
	
	int i = 2 , n ;
	printf( "input your number : " ) ;
	scanf( "%d" , &n ) ;
	while( i < n ) {
		int j = 2 ;
		while( j <= i ) {
			if( i % j == 0 ) {
				break ;         // break and out of while ( j <= i )
			} //end if 
	    	j++ ;
		} // end while j
		if( j > i/j ) {
		printf( " %d " , i ) ; 
    	} // end if
		i++ ;
	} // end while i
}
