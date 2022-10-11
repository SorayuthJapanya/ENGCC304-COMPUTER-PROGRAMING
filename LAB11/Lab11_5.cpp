#include <stdio.h>

char O ;
int  R ;
char Operator( char [] ) ;
int Getresult( int , int ) ;

int main () {
	int  a , b , n = 1 ;
	char c ;
	char op[n] ;
	printf( "Input : " ) ;
	scanf( "%d %c %d", &a , &O , &b ) ;
	Operator( op ) ;
	Getresult( a , b ) ;
	printf("Result : %d", Getresult( a , b ) ) ;
	return 0 ;
}

char Operator( char operater[] ) {
	int x = 1 ;
	int i = 0 ;
	do {
		switch(operater[i]) {
			case '+' :
				O = '+' ;
				break ;
			case '-' :
				O = '-' ;
				break ;
			case '*' :
				O = '*' ;
				break ;
			case '/' :
				O = '/' ;
				break ;
			default : 
				break ;
		}
		i++ ;
	} 
	while( i < x ) ;
	return O ;
}// end function 

int Getresult( int X , int Y ) {
	switch( O ) {
		case '+' :
			R = X + Y ;
			break ;
		case '-' :
			R = X - Y ;
			break ;
		case '*' :
			R = X * Y ;
			break ;
		case '/' :
			R = X / Y ;
			break ;
		default : 
			break ;	
	}
	return R ;
}// end function
