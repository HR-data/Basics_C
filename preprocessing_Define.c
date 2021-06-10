// We will define # -> preprocessing.
// Let say if we define x is 5 then x is become constant.
// #define x 5.
// #define is used for definig macros.

#include<stdio.h>
#define x 6

int main() 
	{
	
	int i = x;
	printf("%d \n",i);
	// It will print 5 and treated x as constant.
	return 0;
	
	}
