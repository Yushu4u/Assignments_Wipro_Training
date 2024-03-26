#include<simpleClac.h>
#include <stdio.h>


void banner()
{
    printf("\n========================================\n");
    printf("\n\tSimple calculator\n");
    printf("\n========================================\n");
    
}

int dispMenu()
{
    int ch;
    printf("\nPress,");
    printf("\n1. Add");
    printf("\n2. Sub");
    printf("\n3. Mul");
    printf("\n4. Div");
    printf("\n5. Mod");
    printf("\nChoice: ");
    scanf("%d",&ch);
    return ch;
    
}

void print_dots(int n, char ch)
{
    int it;
    printf("\n");
    for(it=0;it<n;it++)
        putchar(ch);
    printf("\n");
}

int addition(int val_1, int val_2)
{
    int res = 0;
    res = val_1+val_2;
    return res;
}

int substraction(int val_1, int val_2)
{
    int res = 0;
    res = val_1-val_2;
    return res;
}

int multiplication(int val_1, int val_2)
{
    int res = 0;
    res = val_1*val_2;
    return res;
}


int division(int val_1, int val_2)
{
    int res = 0;
    res = val_1/val_2;
    return res;
}


int modulus(int val_1, int val_2)
{
    int res = 0;
    res = val_1%val_2;
    return res;
}