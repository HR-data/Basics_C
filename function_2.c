// we are adding 2 numbers by definig function
#include<stdio.h>

int add(int,int);  // declaration done !

int main()
	{
	int m,n;
	scanf("%d %d",&m,&n);
	int ans = add(m,n);			// calling function is done !
	printf("The sum is %d \n", ans);
	
	return 0;
	}
	
// lets define function

int add(int i,int j)
	{
	//scanf("%d %d",&i,&j);
	int k= i+j;
	return k;
	
	}	
