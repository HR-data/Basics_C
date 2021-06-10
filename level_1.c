// Lets take input from user and add any two number.

	

#include<stdio.h>

int main ()
	{
	int i,j,k;
	printf("Hey User ! Please Enter any two number '-' \n");
	// for taking input from user we use function scanf .
	//& (amperson) is use to give address of variable.
	
	scanf("%d %d",&i,&j);
	k=i+j ;
	printf("The addition value of %d and %d is %d \n",i,j,k);
	
	k= i-j;
	printf("The subtraction is %d \n",k);
	
	k= i/j;
	printf("The division is %d \n",k);
	
	k=i*j;
	printf("The multiplication is %d \n",k);
	return 0;
	
	};
	
// ther are many  Arthemetic operators like addition , subtraction , divison etc.
// Addition -> + ,  Subtraction -> - , Division -> / , Multiplication -> *	
