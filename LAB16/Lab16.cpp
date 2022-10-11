#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 50
struct employee {
	char name[n] ;
	char check[n] ; 
	int age ;
	float salary ;
	char job[n] ;
}typedef E ;

int keep( E [] ) ;
void Age( E [], int ) ;
void Salary( E [], int ) ;
void find( E [], int, int ) ;

int main() {
	FILE *fp ;
	int countL ;
	int searcher ;
	E employee[n] ;
	printf("\n") ;
	countL = keep(employee) ;
	printf("\nFind Age : ") ;
	scanf( "%d", &searcher ) ;
	Age( employee, countL ) ;
	Salary( employee, countL ) ;
	find( employee, countL, searcher) ;
}

int keep( E in[] ) {
	int count = 0 ;
	FILE *fp ;
	fp = fopen( "salary.txt", "r" ) ;
	if (fp == NULL ) { 
		printf( "ERROR wher is your file?" ) ;
		exit( 0 ) ;
	}
	fscanf( fp, "%s\t%s\t%s\t%s\n", 
	in[0].check, 
	in[0].check, 
	in[0].check, 
	in[0].check ) ;
	for (int i = 0 ; i < n ; i++){
		if (fscanf( fp, "%s\t%d\%f\t%s\n", 
			in[i].name, 
			&in[i].age, 
			&in[i].salary, 
			in[i].job ) != EOF) {
			count++ ;
			printf("%s\t%d\t%.2f\t%s\n", 
				in[i].name, 
				in[i].age, 
				in[i].salary, 
				in[i].job) ;
		}
		else{
			break ;
		}	
	}
	fclose(fp) ;
	return count ;
}

void Age( E data[], int num ) {
	E New ;
	for (int i = 1; i < num ; i++) {
		for (int j = 0 ; j < i ; j++) {
			if( data[i].age > data[j].age){
				New = data[i] ;
				for( int k = i ; k > j ; k--){
					data[k] = data[k-1] ;
				}
				data[j] = New ;
				break ; 
			}
		}
	}
	printf("OUTPUT:\n\t\t") ;
	for (int c = 0 ;  c < 5 ; c++){
		printf("%d\t", data[c].age) ;
	}
	printf("\n") ;
	printf("Age( 99 - 0 )\t") ;
	for (int l = 0 ;  l < 5 ; l++){
		printf("%s\t", data[l].name) ;
	}
	printf("\n\n") ;
}

void Salary( E data[], int num_worker ) {
	E holdTposi ;
	for (int i = 1; i < num_worker ; i++) {
		for (int j = 0 ; j < i ; j++) {
			if( data[i].salary < data[j].salary){
				holdTposi = data[i] ;
				for( int k = i ; k > j ; k--){
					data[k] = data[k-1] ;
				}
				data[j] = holdTposi ;
				break ; 
			}
		}
	}
	printf( "OUTPUT:\n\t\t\t" ) ;
	for ( int c = 0 ;  c < 5 ; c++ ) {
		printf( "%.f\t", data[c].salary ) ;
	}
	printf( "\n" ) ;
	printf( "Salary( 99999 - 0 )\t" ) ;
	for (int l = 0 ;  l < 5 ; l++ ) {
		printf( "%s\t", data[l].name ) ;
	}
	printf( "\n" ) ;
}

void find( E data[], int num_worker, int keeper ) {
	printf( "\nAge %d = ", keeper ) ;
	for ( int i = 0 ; i < num_worker ; i++) {
		if( data[i].age == keeper ) {
			printf( "%s\t", data[i].name ) ;
		}
	}
}
