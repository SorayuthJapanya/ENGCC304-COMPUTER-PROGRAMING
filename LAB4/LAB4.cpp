#include <stdio.h>

int main () {
	
	char User [ 10 ] ;
	int Hrs	         ;
	int Salary       ;
	float Total      ;
	
	
	printf( "Input the Employees ID : " ) ;
	scanf( "%s" ,&User ) ;
	printf( "Input the working hrs : " ) ;
	scanf( "%d" ,&Hrs ) ;
	printf( "Salary amount/hr (Bath) : " ) ;
	scanf( "%d" ,&Salary ) ;
	Total = Salary * Hrs ;
	
	
	printf( "\n----" ) ;
	printf( "\nExpected Output : " ) ;
	printf( "\nEmployees ID = %s", User ) ;
	printf( "\nAmount/day = %.2f Bath(s)", Total ) ;
	return 0 ;
		
} // end function 
