// Ternary operator -> condition ? exp1 : exp2
/* it will check condition , if condition is true it will execute exp1 and if it is false
 then it will execute exp2 */
 
#include<stdio.h>
int main()
	{
	int i=5 ,j=6;
	j= i==5 ? 10 : 8;
	printf("%d \n",j);
	
	// if the value i== 5 is true then it will print 10 ,if it is false then it will print 8.
	
	return 0;
	}
