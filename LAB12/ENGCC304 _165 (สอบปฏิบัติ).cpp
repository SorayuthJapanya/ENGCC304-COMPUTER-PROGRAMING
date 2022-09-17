#include <stdio.h>
#include <string.h>
 
int count = 0;
 
struct Employee {
 char name[ 100 ] ;
 int salary ;
 int year ;
} typedef Emp ;
 
void input_to_struct( Emp [], int ) ;
void show_struct( Emp [], int ) ;
void output_struct( Emp [], int) ;
 
int main() {
	int n = 100 ;
	Emp B[ n ] ;
 	input_to_struct( B, n ) ;
 	show_struct( B, count ) ;
 	output_struct( B, count ) ;
 	return 0 ;
} // end function main
 
void input_to_struct( Emp InputArr[], int n) {
 	char c ;
 	int i = 0 ;
 	bool con ;
 	do {
 		printf( "Do you want to Enter Employee Information? (Y/n) : " ) ;
 		scanf( "%s", &c) ;
 		switch( c ){
 			case 'n' : 
 				con = false ;
 				break ;
 			case 'N' : 
 				con = false ;
 				break ;
    		default :
 				con = true ;
 				printf( "Employee Name : " ) ;
 				scanf( "%s", InputArr[ i ].name ) ;
 				printf( "Salary (Bath/Month) : ") ;
 				scanf( "%d", &InputArr[ i ].salary );
 				printf( "Duration (Year) : " ) ;
 				scanf( "%d", &InputArr[ i ].year) ;
 		i++;
 		count++;
 		}// end switch case
 	} while (con) ;// end do
}// end void input
 
void output_struct( Emp InputArr[], int n ) {
	// find payment
 	float sum = 0;
 	int i = 0 ;
 	while( i < n ) {
 		sum = sum + InputArr[ i ].salary ;
 		i++ ;
 	}// end while
 	printf( "Payment of every month : %.2f Bath" , sum ) ;
 
 	// find average
 	float average = 0;
 	average = sum / count ;
 	printf( "Average of Salary : %.2f Bath", average ) ;
 
 	// find duration
 	int max = 0, index = 0;
 	i = 0 ;
 	while( i < count ) {
 		while(InputArr[ i ].salary > max) {
 			max = InputArr[ i ].salary ;
 			index = i ;
 			break ;
 		}// end while
 	i++ ;
 	}// end while 
 	printf( "\n* Most duration in this business *" );
	printf( "\nName : %s (%d Years)\nSalary : %d Bath", 
 	InputArr[ index ].name,
 	InputArr[ index ].year,
 	InputArr[ index ].salary
 	);
}// end void output
 
void show_struct( Emp InputArr[], int n) {
	int i = 0 ;
 	while( i < n ) {
 		printf( "---------------------------------------\n" );
 		printf( "model[ %d ] \nname : %s \nsalary : %d \nyear : %d\n", 
 		i, 
 		InputArr[ i ].name, 
 		InputArr[ i ].salary,
 		InputArr[ i ].year
 		);
 		printf( "---------------------------------------\n" );
 		i++ ;
 	}// end while
}// end void show
