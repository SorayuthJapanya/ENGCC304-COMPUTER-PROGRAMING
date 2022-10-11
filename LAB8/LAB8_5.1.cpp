#include <stdio.h>

int main() {
	int i ;
	int limit ;
	int a[limit] ;
	int c[limit] ;

	
	printf( "input  Array number : " ) ;
	scanf( "%d" , &limit ) ;
	for(  i = 0 ; i < limit ; i++  ) {
		printf( "\nArray[ %d ] : " , i  ) ;
		scanf( "%d" , &a[i] ) ;
	}
	for( i = 0 ; i < limit ; i++ ){
		if( a[i] < 100 ) {
			c[i] = 1 ;                            // c[i] == count 1 time 
			for( int j = i + 1 ; j < limit ; j++ ) {
				if( a[i] == a[j] ) {          // a[0] == a[1] >> array c[i] = count 2 time ;
					c[i] ++ ;
					a[j] = 100 ;              // a[1] = 100 ;
				}
			}
		}
		else {
			c[i] = 0 ;
		}
	}
	printf("\nUnique = ") ;
	for( i = 0 ; i < limit ; i++ ) {
		//printf("\n %d = %d " , a[i] , c[i] ) ;
		if( c[i] == 1 ) {                // if array c[i] count 1 time  ;
			c[i] = a[i] ; 				// put value in array a[i] in array c[i] ;
			printf("%d " , c[i]) ;
		}
	}
}
