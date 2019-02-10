#include <stdio.h>

void main()
{
	int x = 10,y=9,z = 2*3*6*5;
	int xOrg,yOrg,zOrg;
	xOrg = x,yOrg = y,zOrg = z; // We are going to back up our variables inside those variables you can call them backup variables if you want. 
	//Later we are going to see something similar called Flag variables.
	
	x = y * z; // here we used the multiplication operator.
	y = x + y; // here we used the sub operator
	z = (y * z + 5555) % x; // here we used the modulo division
	printf("x is %d, y is %d, z is %d",x,y,z);
	// Now lets reset the variables
	
	x = xOrg, y= yOrg, z = zOrg;
	// Before going further more. You need to understand that the programmers who wrote C obvioulsy wanted things to go much smoother and easier. So they also added something like this.
	x += y; // this is equivelant to
	x = x + y; // this so basically you are just using a shortcut.
	y *= z;
	z += x * y;
	printf("\nx is %d, y is %d, z is %d", x,y,z);
}
