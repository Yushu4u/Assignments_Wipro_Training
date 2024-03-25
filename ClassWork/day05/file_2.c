/***
				Demo on Recurrsive Function
-				 > function calling itself
***/



#include <stdio.h>

int demo_Recur(int);

int main()
{
    int n=1;
    int ret=0;
    ret = demo_Recur(n);

    printf("\nRet value= %d\n", ret);
    printf("\n\n");
    return 0;
}

int demo_Recur(int i)
{
    int ret_R;
    printf("\ni=%d",i);
    if (i==10){
        // return 201;
        return i;
    }
    i++;
    ret_R = demo_Recur(i);
    printf("\nret_R = %d", ret_R);
    //return 200;
    return i;
}
