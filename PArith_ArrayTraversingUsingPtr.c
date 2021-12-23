/*
NOTE:
	As per arithmetic operations:
		Increment/Decrement operations: overrides the values in the variable
		Addition/Subtraction/Mul/Div/%: does not override the value of the variable, unless, RHS is assigned to LHS
*/


#include <stdio.h>

int main(){
	int arr[] = {11,22,33,44, 55};
	
	int *p;
	
	// p = &arr[0]; //1000H
    //OR
    p = arr; //One and same thing
	
	printf("%d\n", *p);
	
	//Using inc operators
	// printf("%d\n", *(++p));
	// printf("%d\n", *(++p));
	// printf("%d\n", *(++p));
	// printf("%d\n", *(++p));
	
	//Using addition operator
	printf("%d\n", *(p+1)); //22 - with pointer starting point as base address
	printf("%d\n", *(p+2)); //33
	printf("%d\n", *(p+3)); //44
	printf("%d\n", *(p+4)); //55

    return 0;
}