// pointer 
/*


*p is address of variable.

*/

#include<stdio.h>
int main()
	{
	int i = 4;
	int *p;
	p=&i;
	
	printf("%d \n",i);
	printf("%d \n",p);
	printf("%d \n",&i);
	printf("%d \n",p);
	printf("%d \n",*p);
	
	
	
	return 0;
	}
	
	
// evryting is right here , its issue with gcc complier. 	
