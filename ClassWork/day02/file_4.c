/***
					Demo on If/Else st
***/

#include <stdio.h>
#include <string.h>

int main()
{
	char blood[]="a+";
	char matched[5] = "o+";
	int match=0;

	printf("\nBlood group matched after testing?(0/1)");
	scanf("%d",&match);
	if (match == 1){
		strcpy(matched,blood);
	}

	if (strcmp(blood,matched)==0)
	{
		printf("\nPatient got blood from correct match and ");	
	}
	else
	{
		printf("\nPatient got blood from global donar and ");
	}


	printf("Patient saved\n");

	return 0;
}
