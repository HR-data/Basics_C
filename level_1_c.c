// Logical operator
// bitwise operator (& is bitwise "and" opertor and | is biwise "or" operator)
// left and right shift operator (<< and >>)
#include<stdio.h>

int main()
	{
	/*
	AND TABLE (&&) -> TWO AMPERSON FOR AND
	
	T T -> T
	T F -> F
	F T -> F
	F F -> F
	
	OR TABLE ( || ) -> TWO PIPES FOR OR
	
	T F -> T
	F T -> T
	F F -> F
	T T -> T
	
	*/
	int result1 = 3<4 && 5>6;  // true -> 1 and false -> 0
	printf("%d \n", result1);
	
	int result2 = 1==2 || 2>1;
	printf("%d \n",result2);
	
	 /*
	 
	 Bitwise operator work as binary format
	 
	 25 -> 1 1 0 0 1 
	 15 -> 0 1 1 1 1
	------------------ 
	 9  -> 0 1 0 0 1   ( bitwise and operator  )
	
	 1 & 1 -> 1
	 1 & 0 -> 0
	 
	 same for bitwise or operator 
	 
	 */
	 
	 int result3 = 25 | 15;
	 printf("%d \n", result3);
	 
	 /*
	 
	 left and right shift operator . let x = 16 
	 x << 2  (<< -> this is left shift operator )
	 Left shift operator will shift the value by bit wise
	 16 -> 1 0 0 0 0.
	 when we apply left shift operator by 2, 2 biwise value will be shifted
	 that is 1 0 0 0 0 0 0 . -> 64
	 
	 when we right shift opertor to 16 (>>)
	 x>>2
	 then 
	 16 -> 1 0 0 0 0 .
	 after right shift operator
	 1 0 0.0 0 = 1 0 0 ->4
	 
	 
	 */
	 
	 int x = 16 << 2;
	 printf("%d \n",x);
	 int y = 16 >> 2;
	 printf("%d \n",y);
	 
	
	return 0;
	};
