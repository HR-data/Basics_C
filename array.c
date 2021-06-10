// Array -> Collection of same type of element
// 2 d array -> two dimensional array
#include<stdio.h>
int main()
	{
	
	/*
		int A[4] --> integer type elemnts with size 4
		A =[1 2 3 4]
		    0 1 2 3
	*/		    
		    
	int z[4],i;
	z[0]=1;
	z[1]=2;
	z[2]=3;
	z[3]=4;
	
	for(i=0;i<=3;i++)
		{
		
		printf("%d \n",z[i]);
		
		}
	//2 d array
	
	/*
	
		A[3][4] --> size of 2d array is 3 rows and 4 coloum i.e 3 x 4.
		 
		  0 1 2 3
	        0[1 2 3 4]
		1[4 6 7 8]
		2[9 10 11 12]
		3[13 14 15]
		
	*/
	
	int Z[2][3] =
	{
	
	{1, 2, 3},
	{4, 5, 6}
	
	};
	int j;
	for(i=0;i<2;i++)
		{
		
		for(j=0;j<3;j++)
			{
			
			printf("%d ",Z[i][j]);
			}
		
		printf("\n");
		}
	
	return 0;
	}
