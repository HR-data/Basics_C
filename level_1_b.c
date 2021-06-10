// Here we will talk about pre and post increment and decrement value  by 1
// we will see relational operator.

# include <stdio.h>

int main()
	{
	int i,j,k;
	i=1;
	//i++; // post increment (first fetch the value of i then increase the value of i by 1).
	j=i++;
	k=++i; // preincrement -> first increase the value then assign to i.
	printf("i=%d and j=%d and k=%d\n",i,j,k);
	
	
	//same happens with pre and post decrement.
	
	// what if we do i = i++ or i =++i ?
	// lets see this -.-
	
	int m ,n;
	m=10;
	//m=m++; //1
	
	// output is m=10 (there is no increment ). why ? lets go for another example !
	// for this we use another variable temp
	int temp;
	
	temp=m;
	m++;
	m=temp;
	// this is happening when we are doing m=m++ .
	// we are taking value of m is 10 and then do post increment 
	// and again we assign old value to m i.e 10.
	printf("m= %d \n",m);
	
	int result1 = 5<3;  // if result is true -> 1 and false -> 0
	printf("%d \n",result1);
	
	int result2 = 5==5 ;
	printf("%d \n",result2);
	// = is assigment operator and == is for checking .
	
	/*
	
	We have multiple realtional operator 
	like >,<,<=,>=,==,!=
	
	*/
	
	
	return 0;
	
	
	}
