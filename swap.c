// swapping of two number

#include<stdio.h>
int main()
	{
	// we are using third variable to swapping number
	int i=3,j=6,temp;
	printf("Before swapping i =%d , j=%d \n",i ,j);
	temp=i;
	i=j;
	j=temp;
	
	printf("After swapping i = %d , j = %d \n", i,j);
	
	// without using third vairable
	int a=10 ,b=6;
	printf("Before swapping a= %d , b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping a= %d , b=%d \n",a,b);
	
	// using XOR  for swapping--> 1-1 -> 0  ,  1-0 -> 1
	
	int m=8,n=3;
	printf("Before swapaing m=%d , n=%d \n",m,n);
	m=m^n;
	n=m^n;
	m=m^n;
	
	printf("After swapping m= %d , n=%d \n",m,n);
	
	// one line swaping
	
	int x,l;
	x=1;
	l=2;
	printf("Before swapping x=%d , l=%d  \n",x,l);
	l=x+l-(x=l);
	/*bodmas is happening firstly solve bracket one x is asigned with l and then solve
	for l i.e l=x+l-l -> l=x.*/
	
	printf("After swapping x=%d , l=%d  \n",x,l);
	
	return 0;
	}
