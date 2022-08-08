#include <stdio.h>

int main() {
	
    int years ;
    printf( "Input years : " ) ;
    scanf( "%d", &years ) ;
    years = years % 4 ;
    
    if ( years == 0 ) {
        printf( "Feb = 29 days" ) ;
    }// end if
	else{
        printf( "Feb = 28 days" ) ;
    }// end else 
    return 0 ;
}// end function
