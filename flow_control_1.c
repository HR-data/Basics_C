// flow control -> we have two things branching statement and loops
// if else and if else if 
// for and while loop

#include<stdio.h>

int main()
	{
	int i ,j;
	i=15 ;
	if(i>10)
	{
	
	printf("Greater \n");
	
	}
	else
	{
	
	printf("Smaller \n");
	
	}
	
	/*
	we will check which number is greater with the help of if else if
	*/
	
	int a,b,c;
	printf("Hey! Enter the numbers \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c)
	{
	
	 printf("%d is greater \n",a);
	 
	}
	else if (b >c )
	{
	
	printf("%d is greater \n",b);
	
	}
	else
	{
	
	 printf("%d is greater \n",c);
	
	}
	
	
	
	
	
	return 0;
	}
