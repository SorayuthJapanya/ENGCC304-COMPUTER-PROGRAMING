#include <stdio.h>
#include <string.h>

char *name ;
int  n = 0 ;

struct  Emp{
	char name[ 100 ] ;
	float salary ;
}typedef employee ;        

void Input( employee [] ) ;
void Output( employee [] ) ;

int main() {
    int All = 100 ;
    employee answer[All] ;
	Input( answer ) ;
	Output( answer ) ;
	return 0 ;
}

void Input( employee Vat[] ) {
	int OUT ;
	int Num = 1 ;
	int i = 0 ;
	char Check [ 100 ] = "-1" ;
		while( i < Num ) {
			printf( "Employee %d's Name  : ",Num ) ;
			scanf( "%s", Vat[ n ].name ) ;

			name = Vat[ n ].name  ; 
			OUT = strcmp( name , Check ) ; 
			if ( OUT == 0 ) {
				break ;
			}	
			printf( "Salary (Bath/Month) : " ) ;
			scanf( "%f", &Vat[ n ].salary ) ;
			i++ ;
			n++ ;
			Num++ ;	
		}
}

void Output( employee Output[] ) {
	float sum = 0 ;
	float *Vat ;
	float max = 0 ;	
	for ( int i = 0 ; i < n  ; i++ ) {
		sum = sum + Output[i].salary ;
		if (Output[i].salary > max ) {
			max = Output[i].salary ;
			name = Output[i].name ;
			Vat = &(Output[i].salary) ; 
		}	
	} // find max
	printf( "\n------------------------------------------\n") ;
	printf( "All salary per month : %.2f Bath\n", sum) ;
	printf( "All salary per year : %.2f Bath\n", sum*12) ;
	printf( "Tax (7 %% per year) : %.2f Bath\n", sum*12*7/100) ;
	printf( "Most tax in company : %s( %.2f Bath per year)", name, *Vat*12*7/100 ) ;
}
