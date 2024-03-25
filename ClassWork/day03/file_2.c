/***
    syntax:
    for(init section; conditon section; counter section(++/--))
    {
        //Body of For Loop
    }
***/


#include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter a value to iterate from (i):");
    scanf("%d", &i);

    for (i; i<=10; i++)
    {
        printf("%d x %d = %d\n", n, i, (n*i));
   
    }

    printf("\n\nDone!\n\n");
    return 0;

}
