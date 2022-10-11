#include<stdio.h>
#include<string.h>
struct Employee{
	char Name[100] ;
	int age ;
	float Salary ;
	char Job[100] ;
}typedef emp ; 

int main() {
	emp people[100] ;
	int i, max = -99999, min = 99999, *min_age ;
	char *max_name, *max_job, *min_name, *min_job ;
	char *name[] = {"Pong", "Sorn", "Aoy", "Ying", "Yot", "Pot", "Vop"} ;
	int  age[10] = {32, 25, 24, 26, 28, 31, 25} ;
	int  salary[10] = { 45000, 23000, 33250, 34550, 50000, 24500, 25450 } ;
	char *job[] = { "Programmer", "Support", "Advisor", "Programmer", "Founder", "HR", "Programmer"} ;
	for( i = 0 ; i < 7 ; i++) {
		strcpy( people[i].Name, name[i] ) ;
		strcpy( people[i].Job, job[i] ) ;
		people[i].age    = age[i] ;
		people[i].Salary = salary[i] ; 
	} //end for inout struct
	for( int j = 0 ; j < i ; j++ ) {
		if( people[j].age > max ) {
			max      = people[j].age ;
			max_name = people[j].Name ;
			max_job  = people[j].Job ;
		} //end if max age
		if( people[j].Salary < min ){
			min      = people[j].Salary ;
			min_name = people[j].Name ;
			min_age  = &people[j].age ;
			min_job  = people[j].Job ;
		} //end if min salary
	} //end for max min
	printf("Oldest = %s (%d) %s ", max_name, max, max_job ) ;
	printf("\nLowest Salary = %s (%d) %d %s ", min_name , *min_age, min, max_job ) ;
} //end main function
