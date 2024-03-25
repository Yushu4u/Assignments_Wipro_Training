/***

					Branching sts

if (condition)
{
	if block of sts
}

main sts are executed
***/

#include <stdio.h>

int main()
{
	int rain=0;

	printf("\nIs it Raining?(0/1): ");
	scanf("%d",&rain);

	if(rain == 1)
	{
		printf("\nOpen the Umbrella &\n");
	}
	printf("\nWalk with the Umbrella\n");

	return 0;
}
