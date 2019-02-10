#include <stdio.h>
// in this program we are going to store some integers,floats,chars.
void main()
{
	int integer;
	float floatnum;
	char character;
	printf("Please enter an integer:");
	scanf("%d",&integer); // this the line where the input will be stored inside the integer.
	printf("Please enter a floating number:");
	scanf("%.2f",&floatnum);
	printf("Please enter a character:");
	scanf("%c",&character);
	printf("Integer is %d.\n Float is %.2f.\nCharacter is %c.",integer,floatnum,character);
	// Note we used .2f because we want it to be only sensetive up to 2 more numbers.
}
