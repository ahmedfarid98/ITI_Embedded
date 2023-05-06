#include<stdio.h>
#include <string.h>

#define ASSIGN_BIT(VAR,BIT_NB,VAL) VAR=(VAR&(~(1<<BIT_NB)))|(VAL<<BIT_NB)

void main(){
	
	int x=45;
	
	ASSIGN_BIT(x,7,1);
	
	printf("Variable after assign = %d",x);

	
}