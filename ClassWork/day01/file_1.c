/***
			      Demo file on Arithmetic Operators
***/

#include <stdio.h>

int main()
{
	int var1=100, var2=20;
	int result=0;

	//performing addition
	result = var1+var2;
	printf("\naddition of two number=%d",result);
	result = var1 - var2;
	printf("\nsub of two number=%d",result);
	result = var1 * var2;
	printf("\nmul of two number=%d",result);
	result = var1 / var2;
	printf("\ndiv of two number=%d",result);
	//modulus operator
	result = 3%5;
	printf("\nThe Modulus of var1 and var2 is %d",result);

	printf("\n\n");
	return 0;

}
