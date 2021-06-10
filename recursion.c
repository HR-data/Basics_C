// recursion --> function calling itself
// Let make factorial without function first then we will make with recursion 

#include<stdio.h>


//int fact1(int);  // declaration done
/*int main()
	{
	
	int m;
	scanf("%d ",&m);
	int res = fact1(m);
	
	printf("The factorial value without recurssion is %d .\n",res);
	
	return 0;
	}*/

// defining function without recurssion

/*int fact1(int n)
	{
	
	int f=1;
	int i;
	for(i=1;i<=n;i++)
		{
		
		f=f*i;
		}
	return f;
	}*/	
	
	
// lets do it with recurssion
int fact(int); // declaration


int main()
	{
	
	int o;
	scanf("%d",&o);
					// calling of function
	int Ans = fact(o);
	
	printf("The factorial value with recurssion is %d .\n",Ans);
	
	return 0;
	}

int fact(int k)
	{
	
	if(k!=1)
		return k*fact(k-1);	// defining of functon
	
	return 1;
	}


























	
