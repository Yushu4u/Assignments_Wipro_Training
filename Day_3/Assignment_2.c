/***
   		 Problem : Print Table of two using Conditional statement or go-to or label
***/

#include <stdio.h>

int main(){
    int num, i = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Table of two:\n");
    start:
        printf("%d  X %d = %d\n", num, i, num * i);
        i++;
        if (i <= 10)
        {
            goto start;
        }
    return 0;
}   