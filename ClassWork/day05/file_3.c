#include <stdio.h>

void demo_Rec();

int main()
{
    printf("\nRecurrsion started");
    demo_Rec();
    printf("\nRec Done\n\n");
    return 0;
}

void demo_Rec()
{
    printf("\n_In Rec");
    demo_Rec();
    printf("\n_Out Rec");
}
