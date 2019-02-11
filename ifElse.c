#include <stdio.h>
// if,else if and else.
void main()
{
	int i,j,k;
	printf("Enter a num:");
	scanf("%d",&i);
	
	// Let's say we have a number and we want to check it if it is positive or not.
	if (i > 0)
	{
		printf("%d is bigger than zero. Than it is positive.",i);
	}
	else
	{
		printf("%d isn\'t positive.",i);
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Now let's say we have a number but we want it to specify if it is positive or negative.
	printf("\n Enter your second number:");
	scanf("%d",&j);
	if (j>0)
	{
		printf("%d is positive.",j);
	}
	else if (j<0)
	{
		printf("%d is negative.",j);
	}
	else if(j == 0)
	{
		printf("%d is zero.",j);
	}
	else
	{
		// else can't happen in this situation so there isn't a reason to specify it.
	}
	
	// Important thing here is when you start with a if statement it continues to do those if and else if statements. Lastly it will read the else statement and won't read another else if.
	// if it sees another if it is going to assume that there is a completely new statement just like in this very example.
}
