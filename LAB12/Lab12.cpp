#include <stdio.h>
#include <string.h>

int num = 0 ;   // count people

struct document {
	char n[] ;
	char name[ 100 ] ;
	int  salary ;
	int  years  ;
} typedef E ;      // E is value in this struct 

void input_document( E [] ) ;
void output_document( E [] , int ) ;

int main() {
	int n = 100 ;    // amount of value in array
	E Z[ n ] ;
	input_document( Z ) ;
	output_document( Z , num ) ;
	return 0 ;
} // end function main

void input_document( E Input[] ) {
	char a ;
	int  i = 0 ;
	bool YN ;
	do {
		printf( "Do you want to Enter Employee Information? (Y/N) : " ) ;
		scanf( "%s", &a) ;
		switch( a ){
			case 'n' : 
				YN = false ;
				break ;
			case 'N' :
				YN = false ;
				break ;
    		default  :
				YN = true  ;
				gets(Input[i].n ) ;
				printf( "Employee Name : " ) ;
				gets( Input[ i ].name ) ;
				printf( "Salary (Bath/Month) : " ) ;
				scanf( "%d", &Input[ i ].salary ) ;
				printf( "Duration (Year) : " ) ;
				scanf( "%d", &Input[ i ].years ) ;
				i++ ;
				num++ ;
		}
	}
	while ( YN ) ;
} // end function input

void output_document( E Input[] , int n ) {
	// all payment
	float sum = 0 ;
	int   i   = 0 ;
	while( i < n ) {
		sum = sum + Input[ i ].salary ;
		i++ ;
	}
	printf( "\n" ) ;
	printf( "--------------------------------" ) ;
	
	// average
	float average = 0 ;
	average = sum / num ;
	printf( "\n--|Average of Salary : %.2f Baht", average ) ;
	printf( "\n--|Payment of every month : %.2f Baht", sum ) ;
	
	// duration
	int max = 0 , index = 0 ;
	i = 0 ;
	while( i < num ) {
		while( Input[ i ].salary > max ) {
			max = Input[ i ].salary ;
			index = i ;
			break ;
		}
		i++ ;
	}
	printf( "\n* Most duration in this companies *" ) ;
	printf( "\nName : %s (%d Years)\nSalary : %d Bath", 
	Input[ index ].name,
	Input[ index ].years,
	Input[ index ].salary
	) ;
} // end function output
