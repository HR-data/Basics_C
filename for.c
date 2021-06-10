// for loop

#include<stdio.h>
int main ()
	{
	int i;
	for (i=1;i<=5;i++)
		{
		
		printf("%d \n",i);
		
		}
	
	printf("Prinitng first pattern \n");
	int m,n;
	for (m=1;m<=4;m++)
		{
		for(n=1;n<=4;n++)
			{
			
			printf("* ");
			
			}
		printf("\n");
		
		}
	printf("Prinitng second pattern \n");
	
	int j,k;
	for (j=1;j<=4;j++)
		{
		for(k=1;k<=4;k++)
			{
			 if (j == 1 || j == 4 || k == 1 || k == 4)
				printf("* ");
			 else
				printf("  ");
			}
		printf("\n");
		
		}
	
	
	
	
	return 0;
	}
