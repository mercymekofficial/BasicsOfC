#include <stdio.h>

void main()
{
	int i,j,k;
	// to assing a variable. we need to DEFINE them before using. for example as i just did.
	// i told the compiler the letters i,j and k will be used as integer variables.
	char a,b,c;
	// i told the compilter the letters a,b,c will be used as char variables
	float float1,float2,float3;
	// again the compiler is going to use float1,float2 and float 3 as float variables because we assigned them to be.
	double double1,double2;
	// here we assigned 2 more variables as double. This can continue as much as you want.
	unsigned long int x;
	// Like this.
	
	// now lets skip to Logical Operators.
	i = 5;
	j = 3;
	// here is a basic example of using the "AND" operator.
	if (i == 5 && (i % 2 == 1))
	{
		printf("i is 5 and i won\'t be divided with 2.");
	}
	// here is a basic example of using the "OR" operator.
	if(j != 3 || (j % 3 == 0))
	{
		printf("\nj is 3 BUT it is also divided by 3.");
	}
}
