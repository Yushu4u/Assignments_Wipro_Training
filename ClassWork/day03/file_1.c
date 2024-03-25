/***

				Demo on Nested If/Else sts


sy:
	if(cond1)
	{
		if(cond2)
		{
			if(cond3)
			{
				st3
			}
			st2	
		}
		else
		{
			if(cond4)
			{
				st4
			}
			st5
		}
	}
	else
	{
		if(cond5)
		{
			st5
		}
		else if(cond6)
		{
			st6
		}
		else if(cond7)
		{
			st7
		}
		else
		{
			st8
		}	
		st9	
	}


***/

/***
1. Reliance_Mart
2. Dmart
3. Kmart
***/

#include <stdio.h>


int main()
{
	int Reliance_Mart,Dmart,Kmart;
	int open=0;
	int item = 0;
	int available=0;

	printf("\nReliance_Mart is open: (0/1) ");
	scanf("%d",&Reliance_Mart);
	if(Reliance_Mart == 1)
		open = 1;
	else
		open = 0;
	printf("\nDmart is open: (0/1) ");
	scanf("%d",&Dmart);
	if(Dmart == 1)
		open = 1;
	else
		open = 0;
	printf("\nKmart is open: (0/1) ");
	scanf("%d",&Kmart);
	if(Kmart == 1)
		open = 1;
	else
		open = 0;

	printf("\nItems available");
	printf("\nPress,");
	printf("\n1. Sugar");
	printf("\n2. Tea");
	printf("\n3. Salt");
	printf("\nChoice: ");
	scanf("%d",&item);

	switch(item)
	{
		case 1:
			printf("\nSugar is available");
			available = 1;
			break;
		case 2:
			printf("\nTea is available");
			available = 1;
			break;
		case 3:
			printf("\nSalt is available");
			available = 1;
			break;
		default:
			printf("\nitem out of range");
			available = 0;
			break;
	}

	if(Reliance_Mart)
	{
		if((item ==1) && (available==1))
		{

			printf("\nBought Sugar");

		}
		else if((item ==2) && (available==1))
		{

			printf("\nBought Tea");

		}
		else if((item ==3) && (available==1))
		{

			printf("\nBought Salt");

		}
		else
		{
			printf("\nYou havn't shopped anything");
		}

		printf(" from Reliance_Mart\n");

	}
	else if(Dmart)
	{
		if((item ==1) && (available==1))
		{

			printf("\nBought Sugar");

		}
		else if((item ==2) && (available==1))
		{

			printf("\nBought Tea");

		}
		else if((item ==3) && (available==1))
		{

			printf("\nBought Salt");

		}
		else
		{
			printf("\nYou havn't shopped anything");
		}

		printf(" from Dmart\n");
	}
	else //Kmart
	{
		
		if((item ==1) && (available==1))
		{

			printf("\nBought Sugar");

		}
		else if((item ==2) && (available==1))
		{

			printf("\nBought Tea");

		}
		else if((item ==3) && (available==1))
		{

			printf("\nBought Salt");

		}
		else
		{
			printf("\nYou haven't shopped anything");
		}

		printf(" from Kmart\n");
	}

	printf("\n\ndone!\n\n");

	return 0;
}
