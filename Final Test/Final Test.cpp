#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 100 
int Countline ;

struct Information {
	int Num ; 
	char Name[ n ] ;  
	char Date[ n ] ; 
} typedef A ; 

int ReadInformation( A [] ) ; 
void ShowInformation( A [], int ) ;  

int main() {
	A Set[ n ] ; 
    ReadInformation( Set ) ;
	printf("-------------------------------\n") ; 
	ShowInformation( Set, Countline ) ;
	return 0 ;
}

int ReadInformation( A person[] ) {
	FILE *fp ; 
	fp = fopen( "Final Test.txt", "r" ) ;
	if( fp == NULL ) {
		printf( "\nError cannot found this file.( Please fix your name file )" ) ;
		exit( 0 ) ;
	} //end if
	fscanf(fp, "%s\t%s\t\t%s\n", 
		person[ 0 ].Date, 
		person[ 0 ].Date, 
		person[ 0 ].Date ) ;
	printf("%s\t%s\t\t%s\n", "No", "Name", "Birthday") ;
	for( int i = 0 ; i < n ; i++ ) {
		if( fscanf( fp, "%d\t%s\t\t%s\n", &person[ i ].Num, 
			person[ i ].Name, person[ i ].Date ) != EOF ) {
			printf( "%d\t%s\t\t%s\n", 
			person[ i ].Num, person[ i ].Name, person[ i ].Date ) ;
			Countline++ ;
		} //end if
		else {
			break ;
		} //end else	
	} //end for
	fclose( fp ) ;	
	return Countline ;	    
}//end function

void ShowInformation( A person[], int count ) {
	int max = -999 ;            
	int min = 999 ;         
	char EveryoneDate[ n ], *SomeoneDate ;    
	int Y, D, M ;		   
	char *name ; 				
	int Day[ n ] ;				  
	for( int i = 0 ; i < count ; i++ ) {
		strcpy( EveryoneDate, person[ i ].Date ) ;
		for( int j = 0 ; j < 4 ; j++ ) {
			SomeoneDate[ j ] = EveryoneDate[ j ] ;
		} //end for
		Y = atoi( SomeoneDate ) ;
		
		for( int j = 0 ; j < 2 ; j++ ) {
			SomeoneDate[ j ] = EveryoneDate[ j + 5 ] ;
		} //end for month
		SomeoneDate[ 2 ] = '\0' ;
		M = atoi( SomeoneDate ) ;
		
		for( int j = 0 ; j < 2 ; j++ ) {
			SomeoneDate[ j ] = EveryoneDate[ j + 8 ] ;
		} //end for days
		D = atoi( SomeoneDate ) ;
		
		Day[ i ] = ( 2018 - Y ) * 365 + ( 6 - M ) * 30 + ( 21 - D ) ;// change date to day
		printf("%s %d Years, %d Months\n", 
		person[ i ].Name, 
		Day[ i ]/365, 
		( Day[ i ] % 365) / 30 ) ;
	} //end for
	for( int k = 0 ; k < count ; k++ ) {
		if( Day[ k ] > max ) {
			max = Day[ k ] ;
			name = person[ k ].Name ;
		} //end if
	} //end for
	printf( "\nMax : %s [%d Years, %d months]", name, max/365, ( max%365 )/30 ) ;
	for( int k = 0 ; k < count ; k++ ) {
		if( Day[ k ] < min ) {
			min = Day[ k ] ;
			name = person[ k ].Name ;
		} //end if
	} //end for
	printf( "\nMin : %s [%d Years, %d months]", name, min/365, ( min%365 )/30 ) ;
}//end function
