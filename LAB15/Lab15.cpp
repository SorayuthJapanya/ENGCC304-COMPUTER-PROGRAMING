#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 100
struct Employee{
	char name[n] ;
	char check[n] ;
	int age ;
	float salary ;
	char job[n] ;
}typedef E ;
	
int input( E [] ) ;
void showdata( E [], int ) ;
void OUTput( int , E [], int, char [] ) ;
	
int main(){
	E N[n] ;
	int num ;
	num = input( N ) ;
	showdata( N, num ) ;
	return 0 ;
}

int input( E array[] ) {
	int count ;
	FILE *fj ;
	fj = fopen( "salary.txt", "r" ) ;
	if( fj == NULL ){
		printf( "ERROR where is yout file?" ) ;
		exit( 0 ) ;
	}
	fscanf( fj, "%s\t%s\t%s\t%s\n", 
	array[0].check, 
	array[0].check, 
	array[0].check, 
	array[0].check ) ;
	printf( "%s\t%s\t%s\t%s\n", "Name", "Age", "Salary", "Job" ) ;
	for ( int i = 0 ; i < n ; i++ ) {
		if (fscanf( fj, "%s\t%d\%f\t%s\n", 
			array[i].name, 
			&array[i].age, 
			&array[i].salary, 
			array[i].job ) != EOF) {
			count++ ;
			printf("%s\t%d\t%.1f\t%s\n", 
			array[i].name, 
			array[i].age, 
			array[i].salary, 
			array[i].job) ;
		}
		else{
			break ;
		}	
	}
	fclose( fj ) ;
	return count ;
}
void showdata( E op[], int countL ) {
	int max_salary = -99999 ;
	char *Ajob[n] = {"Programmer", "Support", "Advisor", "Founder", "HR"} ;
	char head[n] ;
	printf( "------------------------------------\n" ) ;
	for( int i = 0 ; i < 5; i++ ) {
		for( int k = 0 ; k < n ; k++ ) {
			head[k] = Ajob[i][k] ;
		}
		OUTput( max_salary, op, countL, head ) ;
	}
}

void OUTput( int max, E New[], int countL, char comp[] ) {
	char *name ;
	for( int i=0 ; i < countL ; i++ ) {
		if( strcmp( New[i].job, comp ) == 0 ) {
			if( New[i].salary > max ) {
				max = New[i].salary ;
				name = New[i].name ;
			}
		}	
	}
	printf( "%s : %s %d bath\n", comp, name, max ) ;
}
